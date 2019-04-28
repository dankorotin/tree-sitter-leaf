module.exports = grammar({
  name: 'leaf',

  rules: {
    source_file: $ => repeat(choice(
      $._definition
    )),

    _definition: $ => choice(
      $.raw_text_definition,
      $.tag_definition
    ),

    raw_text_definition: $ => /[^#{}\s\n\t][^#{}]*/,

    tag_definition: $ => seq(
      '#',
      optional($.name),
      $.parameter_list,
      optional($.body)
    ),

    identifier: $ => /[a-zA-Z0-9_]+/,

    string: $ => /[^\"]*/,

    string_parameter: $ => seq('"', $.string, '"'),

    operator_parameter: $ => seq(
      $.identifier,
      optional(choice(
        // TODO: Make 'in' and '.' variables for additional styling options?
        'in',
        /[\+|-|\*|/|=|>|<|&|\||%|!|\^]+/,
        '.'
      )),
      optional($.operator_parameter)),

    name: $ => $.identifier,

    parameter_list: $ => seq('(', optional(choice(
      $.string_parameter,
      $.operator_parameter
    )), ')'),

    body: $ => seq('{', optional($.definitions), '}'),

    definitions: $ => repeat1($._definition),
  }
});
