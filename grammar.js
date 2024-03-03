// helpers
function commaSeparated(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

// Grammar rules
module.exports = grammar({
  name: 'lookml',

  extras: $ => [
    /\s+/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.connection_property,
      $.include_property,
      $.explore,
      $.view,
    )),

    // --[ model definition ]--------------------------------------------------
    connection_property: $ => seq(
      'connection:',
      /\s+/,
      $.identifier,
    ),

    include_property: $ => seq(
      'include:',
      $.string,
    ),
    explore: $ => seq(
      'explore:',
      $.identifier,
      '{',
      repeat($.join),
      '}',
    ),

    join: $ => seq(
      'join:',
      $.identifier,
      '{',
      $.sql_on,
      '}',
    ),

    sql_on: $ => seq(
      'sql_on:',
      $.expression,
      ';;'
    ),

    // --[ view definition ]---------------------------------------------------
    view: $ => seq(
      'view:',
      $.identifier,
      '{',
      repeat(choice($.dimension, $.dimension_group, $.measure, $.set)),
      '}',
    ),

    dimension: $ => seq(
      'dimension:',
      $.identifier,
      '{',
      repeat(
        choice(
          $.primary_key,
          $.sql,
          $.type,
          $.value_format,
        )
      ),
      '}',
    ),

    dimension_group: $ => seq(
      'dimension_group:',
      $.identifier,
      '{',
      repeat(choice($.sql, $.timeframes, $.type)),
      '}',
    ),

    measure: $ => seq(
      'measure:',
      $.identifier,
      '{',
      repeat(choice($.drill_fields, $.sql, $.type, $.value_format)),
      '}',
    ),

    set: $ => seq('set:', $.identifier, '{', $.fields, '}'),

    // --[ field properties ]--------------------------------------------------
    // update with specific allowed tokens

    primary_key: $ => seq('primary_key:', $.identifier),
    type: $ => seq('type:', $.identifier),
    sql: $ => seq('sql:', $.expression, ';;'),
    value_format: $ => seq( 'value_format:', $.string),
    drill_fields: $ => seq(
      'drill_fields:',
      '[',
      commaSeparated($.identifier_with_asterisk),
      ']'
    ),
    fields: $ => seq(
      'fields:',
      '[',
      commaSeparated($.field_identifier),
      ']',
    ),
    timeframes: $ => seq(
      'timeframes:',
      '[',
      commaSeparated($.identifier),
      ']',
    ),

    // --[ miscellaneous ]-----------------------------------------------------
    comment: () => /#.*/,
    dot_walked_identifier: $ => seq($.identifier, '.', $.identifier),
    expression: () => /[^;]+/, // use SQL grammar (github.com/DerekStride/tree-sitter-sql)
    field_identifier: $ => choice($.identifier, $.dot_walked_identifier),
    identifier: () => /[a-zA-Z_][a-zA-Z0-9_]*/,
    identifier_with_asterisk: $ => seq($.identifier, optional('*')),
    string: () => /"[^"\n]*"/,
  }
});
