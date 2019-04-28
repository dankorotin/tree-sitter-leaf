#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 29
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_raw_text_definition = 1,
  anon_sym_POUND = 2,
  sym_identifier = 3,
  sym_string = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_in = 6,
  aux_sym_operator_parameter_token1 = 7,
  anon_sym_DOT = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  sym_source_file = 13,
  sym__definition = 14,
  sym_tag_definition = 15,
  sym_string_parameter = 16,
  sym_operator_parameter = 17,
  sym_name = 18,
  sym_parameter_list = 19,
  sym_body = 20,
  sym_definitions = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_definitions_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_raw_text_definition] = "raw_text_definition",
  [anon_sym_POUND] = "#",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_in] = "in",
  [aux_sym_operator_parameter_token1] = "operator_parameter_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_tag_definition] = "tag_definition",
  [sym_string_parameter] = "string_parameter",
  [sym_operator_parameter] = "operator_parameter",
  [sym_name] = "name",
  [sym_parameter_list] = "parameter_list",
  [sym_body] = "body",
  [sym_definitions] = "definitions",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_definitions_repeat1] = "definitions_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text_definition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_definitions] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == 'i')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_operator_parameter_token1);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_raw_text_definition);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == 'i')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_operator_parameter_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_tag_definition] = STATE(3),
    [sym__definition] = STATE(3),
    [sym_source_file] = STATE(4),
    [sym_raw_text_definition] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
  },
  [2] = {
    [sym_parameter_list] = STATE(7),
    [sym_name] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [3] = {
    [sym_tag_definition] = STATE(9),
    [sym__definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_raw_text_definition] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [5] = {
    [sym_string_parameter] = STATE(13),
    [sym_operator_parameter] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [7] = {
    [sym_body] = STATE(15),
    [anon_sym_POUND] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_raw_text_definition] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
  },
  [8] = {
    [sym_parameter_list] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [9] = {
    [sym_tag_definition] = STATE(9),
    [sym__definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_raw_text_definition] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(34),
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [10] = {
    [sym_string] = ACTIONS(39),
  },
  [11] = {
    [anon_sym_POUND] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [sym_raw_text_definition] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
  },
  [12] = {
    [sym_operator_parameter] = STATE(19),
    [anon_sym_RPAREN] = ACTIONS(43),
    [aux_sym_operator_parameter_token1] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(45),
  },
  [13] = {
    [anon_sym_RPAREN] = ACTIONS(51),
  },
  [14] = {
    [sym__definition] = STATE(22),
    [sym_tag_definition] = STATE(22),
    [aux_sym_definitions_repeat1] = STATE(22),
    [sym_definitions] = STATE(23),
    [sym_raw_text_definition] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(55),
  },
  [15] = {
    [anon_sym_POUND] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_raw_text_definition] = ACTIONS(57),
  },
  [16] = {
    [sym_body] = STATE(24),
    [anon_sym_POUND] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_raw_text_definition] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(29),
  },
  [17] = {
    [anon_sym_DQUOTE] = ACTIONS(59),
  },
  [18] = {
    [sym_operator_parameter] = STATE(26),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_identifier] = ACTIONS(23),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [20] = {
    [anon_sym_POUND] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [sym_raw_text_definition] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [21] = {
    [anon_sym_POUND] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym_raw_text_definition] = ACTIONS(65),
  },
  [22] = {
    [sym_tag_definition] = STATE(27),
    [aux_sym_definitions_repeat1] = STATE(27),
    [sym__definition] = STATE(27),
    [sym_raw_text_definition] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(69),
  },
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(71),
  },
  [24] = {
    [anon_sym_POUND] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_raw_text_definition] = ACTIONS(73),
  },
  [25] = {
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [26] = {
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [27] = {
    [sym_tag_definition] = STATE(27),
    [aux_sym_definitions_repeat1] = STATE(27),
    [sym__definition] = STATE(27),
    [sym_raw_text_definition] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(85),
  },
  [28] = {
    [anon_sym_POUND] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym_raw_text_definition] = ACTIONS(87),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(3),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [17] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_tag_definition, 2),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_operator_parameter, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(18),
  [47] = {.count = 1, .reusable = false}, SHIFT(18),
  [49] = {.count = 1, .reusable = false}, SHIFT(12),
  [51] = {.count = 1, .reusable = true}, SHIFT(20),
  [53] = {.count = 1, .reusable = true}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(21),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_tag_definition, 3),
  [59] = {.count = 1, .reusable = true}, SHIFT(25),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_operator_parameter, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(28),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_tag_definition, 4),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_operator_parameter, 3),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(27),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(2),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_leaf() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
