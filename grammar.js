module.exports = grammar({
  name: 'leaf',

  rules: {
    source_file: $ => repeat(
      choice(
        $._definition
      )),

    _definition: $ => choice(
      $.raw_text,
      $.tag
    ),

    raw_text: $ => /[^#{}()\s][^#{}()]*/,

    tag: $ => seq(
      choice('#', '##'),
      optional($.name),
      $.parameter_list,
      optional($.body)
    ),

    identifier: $ => /[a-zA-Z0-9_]+/,
    string: $ => /[^\"]*/,
    string_parameter: $ => seq('"', $.string, '"'),
    name: $ => $.identifier,

    parameter_list: $ => seq(
      '(',
      optional(
        repeat1(
          choice(
            $.string_parameter,
            $.identifier,
            choice(
              // TODO: Make 'in' and '.' variables for additional styling options?
              'in',
              /[\+|-|\*|/|=|>|<|&|\||%|!]+/,
              '.'
            ),
          )
        )
      ),
      ')'
    ),

    body: $ => seq(
      '{',
      optional($.definitions),
      choice(
        '}',
        seq('}', $.else_if),
        seq('}', $.else)
      )
    ),

    definitions: $ => repeat1($._definition),

    else_if: $ => seq(
      'else if ', // TODO: Use regex?
      '(',
      optional($.identifier),
      ')',
      $.body
    ),

    else: $ => seq(
      'else' + ' ', // TODO: Use regex?
      $.body
    )
  }
});
