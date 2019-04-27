#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 24
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_junk_definition = 1,
  anon_sym_POUND = 2,
  sym_identifier = 3,
  sym_string = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_source_file = 10,
  sym__definition = 11,
  sym_tag_definition = 12,
  sym_string_parameter = 13,
  sym_name = 14,
  sym_parameter_list = 15,
  sym_body = 16,
  sym_definitions = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_definitions_repeat1 = 19,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_junk_definition] = "junk_definition",
  [anon_sym_POUND] = "#",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_tag_definition] = "tag_definition",
  [sym_string_parameter] = "string_parameter",
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
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DQUOTE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym__definition] = STATE(3),
    [sym_tag_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_source_file] = STATE(4),
    [sym_junk_definition] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
  },
  [2] = {
    [sym_name] = STATE(7),
    [sym_parameter_list] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [3] = {
    [sym_tag_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__definition] = STATE(9),
    [sym_junk_definition] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [5] = {
    [sym_string_parameter] = STATE(11),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(23),
  },
  [7] = {
    [sym_parameter_list] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [8] = {
    [sym_body] = STATE(14),
    [anon_sym_POUND] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_junk_definition] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [9] = {
    [sym_tag_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__definition] = STATE(9),
    [sym_junk_definition] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(32),
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [10] = {
    [sym_string] = ACTIONS(37),
  },
  [11] = {
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [12] = {
    [sym_body] = STATE(17),
    [anon_sym_POUND] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_junk_definition] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [13] = {
    [aux_sym_definitions_repeat1] = STATE(19),
    [sym_tag_definition] = STATE(19),
    [sym__definition] = STATE(19),
    [sym_definitions] = STATE(20),
    [sym_junk_definition] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(45),
  },
  [14] = {
    [anon_sym_POUND] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_junk_definition] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
  },
  [15] = {
    [anon_sym_DQUOTE] = ACTIONS(47),
  },
  [16] = {
    [anon_sym_POUND] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_junk_definition] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
  },
  [17] = {
    [anon_sym_POUND] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_junk_definition] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
  },
  [18] = {
    [anon_sym_POUND] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_junk_definition] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
  },
  [19] = {
    [sym_tag_definition] = STATE(22),
    [sym__definition] = STATE(22),
    [aux_sym_definitions_repeat1] = STATE(22),
    [anon_sym_RBRACE] = ACTIONS(55),
    [sym_junk_definition] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [20] = {
    [anon_sym_RBRACE] = ACTIONS(59),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [22] = {
    [sym_tag_definition] = STATE(22),
    [sym__definition] = STATE(22),
    [aux_sym_definitions_repeat1] = STATE(22),
    [sym_junk_definition] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(69),
  },
  [23] = {
    [anon_sym_POUND] = ACTIONS(71),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_junk_definition] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
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
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_tag_definition, 2),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_tag_definition, 3),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(18),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_tag_definition, 4),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(22),
  [59] = {.count = 1, .reusable = true}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(22),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(2),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
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
