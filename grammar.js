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
      repeat($.dimension),
      '}',
    ),

    dimension: $ => seq(
      'dimension:',
      $.identifier,
      '{',
      repeat(choice(
        $.primary_key,
        $.type,
        $.sql,
        $.value_format,
      )),
      '}',
    ),

    // --[ dimension fields ]--------------------------------------------------
    primary_key: $ => seq(
      'primary_key:',
      $.identifier,
    ),
    type: $ => seq(
      'type:',
      $.identifier,
    ),
    sql: $ => seq(
      'sql:',
      $.expression,
      ';;'
    ),
    value_format: $ => seq(
      'value_format:',
      $.string,
    ),

    // --[ miscellaneous ]-----------------------------------------------------
    comment: () => /#.*/,
    identifier: () => /[a-zA-Z_][a-zA-Z0-9_]*/,
    string: () => /"[^"\n]*"/,
    expression: () => /[^;]+/,
  }
});
