module.exports = grammar({
  name: 'leaf',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.tag,
      $.variable,
      $.comment
    ),

    tag: $ => seq($.tag_symbol, $.tag_components),

    tag_components: $ => seq(
      alias($.identifier, "name"),
      $.parameter_list,
      optional($.body)
    ),

    variable: $ => seq(
      '#(',
      $.identifier,
      ')'
    ),

    comment: $ => choice(
      seq('#//', /[\w\s*]*/),
      seq('#/*', /[\w\'\s\r\n\*]*\*\//)
    ),

    tag_symbol: $ => /[#]+/,

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

    else: $ => /[\s]*else[\s]*/,

    body: $ => seq(
      /[\s]*\{[\s]*/,
      optional($._definitions),
      /[\s]*\}[\s]*/,
      optional(
        seq(
          $.else,
          $.body,
          $.tag_components
        )
      ),
      // optional(seq($.else, $.tag_components, $.body))
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
