module.exports = grammar({
  name: 'leaf',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.variable_definition,
      $.simple_tag_definition,
      $.tag_with_body_definition
    ),

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

    variable: $ => seq(
      '#',
      $.parameter_list
    ),

    tag_name: $ => seq(
      '#',
      $.identifier
    ),

    parameter_list: $ => seq(
      '(',
       $.identifier,
      ')'
    ),

    body: $ => seq(
      '{',
       optional($.definitions),
      '}'
    ),

    definitions: $ => repeat1($._definition),

    identifier: $ => /[a-z]+/
  }
});
