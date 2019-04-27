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

    junk_definition: $ => /[^#{}\s\n\t][^#]*/,

    variable_definition: $ => seq(
      $.variable
    ),

    simple_tag_definition: $ => seq(
      $.tag_name,
      $.parameter_list
    ),

    tag_with_body_definition: $ => seq(
      $.tag_name,
      $.parameter_list,
      $.body
    ),

    identifier: $ => /[a-z]+/,
    variable: $ => seq('#', $.parameter_list),
    tag_name: $ => seq('#', $.identifier),
    parameter_list: $ => seq('(', $.identifier, ')'),
    body: $ => seq('{', optional($.definitions), '}'),
    definitions: $ => repeat1($._definition),
  }
});
