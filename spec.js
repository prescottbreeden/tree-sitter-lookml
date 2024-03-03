module.exports = grammar({
  name: 'lookml',

  rules: {
    source_file: $ => choice(
      $.connection_statement,
      // $.include_statement,
      // $.explore_definition,
      // $.view_definition,
    ),

    // comment: $ => /#.*/,

    connection_statement: $ => seq(
      'connection:',
      $.string,
    ),

    // include_statement: $ => seq(
    //   'include:',
    //   $.string,
    // ),

    // explore_definition: $ => seq(
    //   'explore:',
    //   $.identifier,
    //   '{',
    //   repeat(choice(
    //     $.join_definition,
    //     $.view_label, // Add more explore-specific properties
    //   )),
    //   '}'
    // ),

    // join_definition: $ => seq(
    //   'join:',
    //   $.identifier,
    //   '{',
    //   repeat(choice(
    //     $.sql_on_clause,
    //     $.relationship, // Add more join-specific properties
    //   )),
    //   ';;',
    //   '}'
    // ),

    // view_definition: $ => seq(
    //   'view:',
    //   $.identifier,
    //   '{',
    //   repeat(choice(
    //     $.dimension_definition,
    //     $.measure_definition,
    //     $.dimension_group_definition, // Add more view-specific elements
    //     $.extends_clause,
    //   )),
    //   '}'
    // ),

    // dimension_definition: $ => seq(
    //   'dimension:',
    //   $.identifier,
    //   '{',
    //   repeat(choice(
    //     $.type_definition,
    //     $.sql_clause, // Add more dimension-specific properties
    //   )),
    //   '}'
    // ),

    // measure_definition: $ => seq(
    //   'measure:',
    //   $.identifier,
    //   '{',
    //   repeat(choice(
    //     $.type_definition,
    //     $.sql_clause, // Add more measure-specific properties
    //   )),
    //   '}'
    // ),

    // dimension_group_definition: $ => seq(
    //   'dimension_group:',
    //   $.identifier,
    //   '{',
    //   repeat(choice(
    //     $.type_definition,
    //     $.timeframes, // Define timeframes for the dimension group
    //   )),
    //   '}'
    // ),

    // extends_clause: $ => seq(
    //   'extends:',
    //   $.identifier
    // ),

    // parameter: $ => seq(
    //   'parameter:',
    //   $.identifier,
    //   '{',
    //   repeat(choice(
    //     $.type_definition,
    //     $.allowed_values, // Define allowed values for the parameter
    //   )),
    //   '}'
    // ),

    // filter: $ => seq(
    //   'filter:',
    //   $.identifier,
    //   '{',
    //   repeat($.type_definition), // Define filter type
    //   '}'
    // ),

    // // Simplified definitions for other rules
    // sql_on_clause: $ => /.*/,
    // type_definition: $ => seq('type:', $.identifier),
    // sql_clause: $ => seq('sql:', /.*/, ';;'),
    // relationship: $ => seq('relationship:', $.identifier),
    // view_label: $ => seq('view_label:', $.string),
    // allowed_values: $ => seq('allowed_value:', $.string),
    // timeframes: $ => seq('timeframes:', '[', $.identifier, repeat(seq(',', $.identifier)), ']'),
    // identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    // string: $ => /"[^"]*"/,
  }
});
