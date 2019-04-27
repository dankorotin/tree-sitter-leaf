#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 24
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_junk_definition = 1,
  sym_identifier = 2,
  sym_string = 3,
  anon_sym_DQUOTE = 4,
  anon_sym_POUND = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_source_file = 10,
  sym__definition = 11,
  sym_variable_definition = 12,
  sym_simple_tag_definition = 13,
  sym_tag_with_body_definition = 14,
  sym_string_parameter = 15,
  sym_variable = 16,
  sym_name = 17,
  sym_parameter_list = 18,
  sym_body = 19,
  sym_definitions = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_definitions_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_junk_definition] = "junk_definition",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
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
  [sym_string_parameter] = "string_parameter",
  [sym_variable] = "variable",
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
  [sym_junk_definition] = {
    .visible = true,
    .named = true,
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
  [sym_string_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
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
      if (lookahead == '{')
        ADVANCE(6);
      if (lookahead == '}')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(6);
      if (lookahead == '}')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(9);
      if (lookahead != 0)
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_junk_definition);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_POUND] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_simple_tag_definition] = STATE(5),
    [sym_tag_with_body_definition] = STATE(5),
    [sym_source_file] = STATE(3),
    [sym_variable] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym__definition] = STATE(5),
    [sym_variable_definition] = STATE(5),
    [sym_name] = STATE(6),
    [sym_junk_definition] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
  },
  [2] = {
    [sym_parameter_list] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [4] = {
    [anon_sym_POUND] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_junk_definition] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(15),
  },
  [5] = {
    [sym_variable] = STATE(4),
    [sym_simple_tag_definition] = STATE(10),
    [sym_tag_with_body_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_variable_definition] = STATE(10),
    [sym_name] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_junk_definition] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [6] = {
    [sym_parameter_list] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [7] = {
    [sym_string_parameter] = STATE(12),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
  },
  [8] = {
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [9] = {
    [anon_sym_POUND] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_junk_definition] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
  },
  [10] = {
    [sym_variable] = STATE(4),
    [sym_simple_tag_definition] = STATE(10),
    [sym_tag_with_body_definition] = STATE(10),
    [sym__definition] = STATE(10),
    [sym_variable_definition] = STATE(10),
    [sym_name] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_junk_definition] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(32),
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [11] = {
    [sym_body] = STATE(15),
    [anon_sym_POUND] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_junk_definition] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
  },
  [12] = {
    [anon_sym_RPAREN] = ACTIONS(41),
  },
  [13] = {
    [sym_string] = ACTIONS(43),
  },
  [14] = {
    [sym_simple_tag_definition] = STATE(20),
    [sym_tag_with_body_definition] = STATE(20),
    [sym_definitions] = STATE(19),
    [sym_variable] = STATE(4),
    [aux_sym_definitions_repeat1] = STATE(20),
    [sym__definition] = STATE(20),
    [sym_variable_definition] = STATE(20),
    [sym_name] = STATE(6),
    [sym_junk_definition] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(47),
  },
  [15] = {
    [anon_sym_POUND] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_junk_definition] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
  },
  [16] = {
    [anon_sym_POUND] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_junk_definition] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
  },
  [17] = {
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [18] = {
    [anon_sym_POUND] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_junk_definition] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
  },
  [19] = {
    [anon_sym_RBRACE] = ACTIONS(57),
  },
  [20] = {
    [sym_variable] = STATE(4),
    [sym_simple_tag_definition] = STATE(23),
    [sym_tag_with_body_definition] = STATE(23),
    [sym__definition] = STATE(23),
    [sym_variable_definition] = STATE(23),
    [sym_name] = STATE(6),
    [aux_sym_definitions_repeat1] = STATE(23),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_junk_definition] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(63),
  },
  [22] = {
    [anon_sym_POUND] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_junk_definition] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
  },
  [23] = {
    [sym_variable] = STATE(4),
    [sym_simple_tag_definition] = STATE(23),
    [sym_tag_with_body_definition] = STATE(23),
    [sym__definition] = STATE(23),
    [sym_variable_definition] = STATE(23),
    [sym_name] = STATE(6),
    [aux_sym_definitions_repeat1] = STATE(23),
    [sym_junk_definition] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(73),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(5),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(7),
  [11] = {.count = 1, .reusable = true}, SHIFT(8),
  [13] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_name, 2),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_simple_tag_definition, 2),
  [39] = {.count = 1, .reusable = true}, SHIFT(14),
  [41] = {.count = 1, .reusable = true}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_tag_with_body_definition, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(22),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(23),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(23),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(2),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2),
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
