#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 20
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_POUND = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_identifier = 6,
  sym_source_file = 7,
  sym__definition = 8,
  sym_variable_definition = 9,
  sym_simple_tag_definition = 10,
  sym_tag_with_body_definition = 11,
  sym_variable = 12,
  sym_tag_name = 13,
  sym_parameter_list = 14,
  sym_body = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_simple_tag_definition] = "simple_tag_definition",
  [sym_tag_with_body_definition] = "tag_with_body_definition",
  [sym_variable] = "variable",
  [sym_tag_name] = "tag_name",
  [sym_parameter_list] = "parameter_list",
  [sym_body] = "body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_tag_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_with_body_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
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
  [aux_sym_source_file_repeat1] = {
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
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(5);
      if (lookahead == '}')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(5);
      if (lookahead == '}')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(9);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_simple_tag_definition] = STATE(3),
    [sym_tag_with_body_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_source_file] = STATE(4),
    [sym_variable] = STATE(5),
    [sym_tag_name] = STATE(6),
    [sym__definition] = STATE(3),
    [sym_variable_definition] = STATE(3),
    [anon_sym_POUND] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
  },
  [2] = {
    [sym_parameter_list] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
  [3] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(10),
    [sym_tag_with_body_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_variable_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_variable] = STATE(5),
    [anon_sym_POUND] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [5] = {
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [6] = {
    [sym_parameter_list] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [7] = {
    [sym_identifier] = ACTIONS(17),
  },
  [8] = {
    [anon_sym_LPAREN] = ACTIONS(19),
  },
  [9] = {
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [10] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(10),
    [sym_tag_with_body_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_variable_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_variable] = STATE(5),
    [anon_sym_POUND] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(26),
  },
  [11] = {
    [sym_body] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(28),
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(30),
    [anon_sym_POUND] = ACTIONS(28),
  },
  [12] = {
    [anon_sym_RPAREN] = ACTIONS(32),
  },
  [13] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(17),
    [sym_tag_with_body_definition] = STATE(17),
    [sym__definition] = STATE(17),
    [sym_variable_definition] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_variable] = STATE(5),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(34),
  },
  [14] = {
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_RBRACE] = ACTIONS(36),
    [ts_builtin_sym_end] = ACTIONS(36),
  },
  [15] = {
    [anon_sym_RBRACE] = ACTIONS(38),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_POUND] = ACTIONS(38),
  },
  [16] = {
    [anon_sym_POUND] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [ts_builtin_sym_end] = ACTIONS(40),
  },
  [17] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(19),
    [sym_tag_with_body_definition] = STATE(19),
    [sym__definition] = STATE(19),
    [sym_variable_definition] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [sym_variable] = STATE(5),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(42),
  },
  [18] = {
    [anon_sym_POUND] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(44),
    [ts_builtin_sym_end] = ACTIONS(44),
  },
  [19] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(19),
    [sym_tag_with_body_definition] = STATE(19),
    [sym__definition] = STATE(19),
    [sym_variable_definition] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [sym_variable] = STATE(5),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(26),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 2),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 2),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [28] = {.count = 1, .reusable = true}, REDUCE(sym_simple_tag_definition, 2),
  [30] = {.count = 1, .reusable = true}, SHIFT(13),
  [32] = {.count = 1, .reusable = true}, SHIFT(15),
  [34] = {.count = 1, .reusable = true}, SHIFT(16),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_tag_with_body_definition, 3),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [42] = {.count = 1, .reusable = true}, SHIFT(18),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
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
