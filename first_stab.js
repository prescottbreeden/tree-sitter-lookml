module.exports = grammar({
  name: 'lookml',

  extras: $ => [
    /\s/, // Whitespace
    $.comment,
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.include_statement,
      $.explore_definition,
      $.view_definition,
      $.dimension_definition,
      $.measure_definition,
      $.set_definition,
    )),

    comment: _$ => /#.*/,

    include_statement: _$ => seq(
      'include:',
      /.+\.lkml/
    ),

    explore_definition: $ => seq(
      'explore:',
      $.identifier,
      '{',
      repeat($.join_definition), // Assuming multiple joins possible
      '}'
    ),

    join_definition: $ => seq(
      'join:',
      $.identifier,
      '{',
      'sql_on:',
      $.sql_on_clause,
      ';;',
      '}'
    ),

    view_definition: $ => seq(
      'view:',
      $.identifier,
      '{',
      repeat(choice($.dimension_definition, $.measure_definition)), // Add more as needed
      '}'
    ),

    dimension_definition: $ => seq(
      'dimension:',
      $.identifier,
      '{',
      repeat(choice($.type_definition, $.sql_clause)), // Add more properties as needed
      '}'
    ),

    measure_definition: $ => seq(
      'measure:',
      $.identifier,
      '{',
      // Define measure properties
      '}'
    ),

    set_definition: $ => seq(
      'measure:',
      $.identifier,
      '{',
      // Define set properties
      '}'
    ),

    // Definitions for sql_clause, type_definition, identifier, etc.
    sql_on_clause: $ => /.*/, // Simplified for example
    type_definition: $ => seq('type:', $.identifier),
    sql_clause: $ => seq('sql:', /.*/, ';;'),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
  }
});

