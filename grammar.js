module.exports = grammar({
  name: 'leaf',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.tag,
      $.variable,
      $.comment
    ),

    tag: $ => seq($._tag_symbol, $._tag_components),

    _tag_components: $ => seq(
      alias($.identifier, "tag_name"),
      $.parameter_list,
      optional($.body),
      optional($.else_if),
      optional($.else)
    ),

    variable: $ => seq(
      '#(',
      $.identifier,
      ')'
    ),

    comment: $ => choice(
      seq('#//', /[^\n]*/),
      seq('#/*', /[\w\'\s\r\n\*]*\*\//)
    ),

    _tag_symbol: $ => /[#]+/,

    identifier: $ => /\w+/,

    string: $ => /[^\n\"]+/,

    string_parameter: $ => seq('"', $.string, '"'),

    operator: $ => choice(
      'in',
      /[\+|\-|\*|\/|=|>|<|\&|\||%|\!]+/,
      '.'
    ),

    parameter_list: $ => seq(
      '(',
      optional($._parameters),
      ')'
    ),

    _parameters: $ => repeat1(
      choice(
        $.string_parameter,
        $.operator
      )
    ),

    else_if: $ => seq(
      'else if',
      $.parameter_list,
      $.body
    ),

    else: $ => seq(
      'else',
      $.body
    ),

    body: $ => seq(
      '{',
      optional($._definitions),
      '}'
    ),

    _definitions: $ => repeat1($._definition)
  },

  extras: $ => [/[^#]*/]
});

// module.exports = grammar({
//   name: 'leaf',
//
//   rules: {
//     source_file: $ => repeat(
//       choice(
//         $._definition
//       )),
//
//     _definition: $ => choice(
//       $.raw_text,
//       $.comment,
//       $.tag,
//       $.html
//     ),
//
//     raw_text: $ => /[^#\n\t\s][^#\n]*/,
//
    // comment: $ => choice(
    //   seq('#//', $.raw_text),
    //   seq('#/*', /[\w\'\s\r\n\*]*\*\//)
    // ),
//
//     tag: $ => seq(
//       '#',
//       optional($.name),
//       $.parameter_list,
//       optional($.body)
//     ),
//
//     identifier: $ => /[\w]+/,
//     string: $ => /[^\"\']*/,
//     name: $ => $.identifier,
//     html: $ => /[<][^#{}]*[>]/,
//
    // string_parameter: $ => choice(
    //   seq('"', $.string, '"'),
    //   seq("\'", $.string, "\'")
    // ),
//
    // parameter_list: $ => seq(
    //   '(',
    //   optional(
    //     repeat1(
    //       choice(
    //         $.string_parameter,
    //         $.identifier,
    //         choice(
    //           // TODO: Make 'in' and '.' variables for additional styling options?
    //           'in',
    //           /[\+|-|\*|/|=|>|<|&|\||%|!]+/,
    //           '.'
    //         ),
    //       )
    //     )
    //   ),
    //   ')'
    // ),
//
  //   body: $ => seq(
  //     '{',
  //     optional($.definitions),
  //     '}'
  //   ),
  //
  //   definitions: $ => repeat1($._definition)
  // }
// });
