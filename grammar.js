module.exports = grammar({
  name: 'leaf',

  rules: {
    source_file: $ => repeat(
      choice(
        $._definition
      )),

    _definition: $ => choice(
      $.raw_text,
      $.comment,
      $.tag,
      $.html
    ),

    raw_text: $ => /[^#\n\t\s][^#\n]*/,

    comment: $ => choice(
      seq('#//', $.raw_text),
      seq('#/*', /[\w\'\s\r\n\*]*\*\//)
    ),

    tag: $ => seq(
      '#',
      optional($.name),
      $.parameter_list,
      optional($.body)
    ),

    identifier: $ => /[a-zA-Z0-9_]+/,
    string: $ => /[^\"]*/,
    string_parameter: $ => seq('"', $.string, '"'),
    name: $ => $.identifier,
    html: $ => /[<][^#{}]*[>]/,

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
      '}'
    ),

    definitions: $ => repeat1($._definition)
  }
});
