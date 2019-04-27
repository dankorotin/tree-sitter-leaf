#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 21
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_junk = 1,
  sym_identifier = 2,
  anon_sym_POUND = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_source_file = 8,
  sym__definition = 9,
  sym_variable_definition = 10,
  sym_simple_tag_definition = 11,
  sym_tag_with_body_definition = 12,
  sym_variable = 13,
  sym_tag_name = 14,
  sym_parameter_list = 15,
  sym_body = 16,
  sym_definitions = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_definitions_repeat1 = 19,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_junk] = "junk",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_simple_tag_definition] = "simple_tag_definition",
  [sym_tag_with_body_definition] = "tag_with_body_definition",
  [sym_variable] = "variable",
  [sym_tag_name] = "tag_name",
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
  [sym_junk] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
      if (lookahead != 0)
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_junk);
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
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
    [sym_junk] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
  [2] = {
    [sym_parameter_list] = STATE(9),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [3] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(10),
    [sym_tag_with_body_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_variable_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_variable] = STATE(5),
    [sym_junk] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(7),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [sym_junk] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
  },
  [6] = {
    [sym_parameter_list] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(21),
  },
  [8] = {
    [sym_identifier] = ACTIONS(23),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [sym_junk] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(25),
  },
  [10] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(10),
    [sym_tag_with_body_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_variable_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_variable] = STATE(5),
    [sym_junk] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(30),
    [ts_builtin_sym_end] = ACTIONS(33),
  },
  [11] = {
    [sym_body] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_junk] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [12] = {
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [13] = {
    [sym_simple_tag_definition] = STATE(18),
    [sym_tag_with_body_definition] = STATE(18),
    [sym_definitions] = STATE(17),
    [sym_variable] = STATE(5),
    [sym_tag_name] = STATE(6),
    [aux_sym_definitions_repeat1] = STATE(18),
    [sym__definition] = STATE(18),
    [sym_variable_definition] = STATE(18),
    [sym_junk] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(43),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym_junk] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(45),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym_junk] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(47),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [sym_junk] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(49),
  },
  [17] = {
    [anon_sym_RBRACE] = ACTIONS(51),
  },
  [18] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(20),
    [sym_tag_with_body_definition] = STATE(20),
    [sym__definition] = STATE(20),
    [sym_variable_definition] = STATE(20),
    [aux_sym_definitions_repeat1] = STATE(20),
    [sym_variable] = STATE(5),
    [sym_junk] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(7),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_junk] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(57),
  },
  [20] = {
    [sym_tag_name] = STATE(6),
    [sym_simple_tag_definition] = STATE(20),
    [sym_tag_with_body_definition] = STATE(20),
    [sym__definition] = STATE(20),
    [sym_variable_definition] = STATE(20),
    [aux_sym_definitions_repeat1] = STATE(20),
    [sym_variable] = STATE(5),
    [sym_junk] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(65),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(3),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(7),
  [11] = {.count = 1, .reusable = true}, SHIFT(8),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [17] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 2),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_simple_tag_definition, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(13),
  [39] = {.count = 1, .reusable = true}, SHIFT(15),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(16),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_tag_with_body_definition, 3),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [51] = {.count = 1, .reusable = true}, SHIFT(19),
  [53] = {.count = 1, .reusable = true}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(20),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(2),
  [65] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2),
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
