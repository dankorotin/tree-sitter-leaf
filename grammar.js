module.exports = grammar({
  name: 'leaf',

  rules: {
    source_file: $ => repeat(choice(
      $._definition
    )),

    _definition: $ => choice(
      $.junk_definition,
      $.variable_definition,
      $.simple_tag_definition,
      $.tag_with_body_definition
    ),

    junk_definition: $ => /[^#{}\s\n\t][^#{}]*/,

    variable_definition: $ => seq(
      $.variable
    ),

    simple_tag_definition: $ => seq(
      $.name,
      $.parameter_list
    ),

    tag_with_body_definition: $ => seq(
      $.name,
      $.parameter_list,
      $.body
    ),

    identifier: $ => /[a-zA-Z0-9_]+/,

    string: $ => /[^\"]*/,

    string_parameter: $ => seq('"', $.string, '"'),

    variable: $ => seq('#', $.parameter_list),

    name: $ => seq('#', $.identifier),

    parameter_list: $ => seq('(', choice(
      $.identifier,
      $.string_parameter
    ), ')'),

    body: $ => seq('{', optional($.definitions), '}'),

    definitions: $ => repeat1($._definition),
  }
});
