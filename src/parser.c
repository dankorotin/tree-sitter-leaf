#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 42
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_POUND_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_POUND_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  sym_tag_symbol = 5,
  sym_identifier = 6,
  sym_string = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_in = 11,
  aux_sym_parameters_token1 = 12,
  anon_sym_DOT = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_source_file = 16,
  sym__definition = 17,
  sym_tag = 18,
  sym_comment = 19,
  sym_string_parameter = 20,
  sym_parameter_list = 21,
  sym_parameters = 22,
  sym_body = 23,
  sym_definitions = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_parameters_repeat1 = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_SLASH_SLASH] = "#//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SLASH_STAR] = "#/*",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_tag_symbol] = "tag_symbol",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_in] = "in",
  [aux_sym_parameters_token1] = "parameters_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_tag] = "tag",
  [sym_comment] = "comment",
  [sym_string_parameter] = "string_parameter",
  [sym_parameter_list] = "parameter_list",
  [sym_parameters] = "parameters",
  [sym_body] = "body",
  [sym_definitions] = "definitions",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_tag_symbol] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameters_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
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
  [aux_sym_parameters_repeat1] = {
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
      if (lookahead == '{')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_tag_symbol);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(6);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '{')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_tag_symbol);
      if (lookahead == '#')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_SLASH);
      END_STATE();
    case 9:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead != 0)
        SKIP(9);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(10);
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
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '"')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '"')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'n')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_parameters_token1);
      if (lookahead == '"')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead != 0)
        SKIP(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ')')
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')')
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead != 0)
        SKIP(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '"')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_tag_symbol] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_tag] = STATE(5),
    [sym__definition] = STATE(5),
    [sym_source_file] = STATE(6),
    [sym_tag_symbol] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(9),
  },
  [2] = {
    [sym_identifier] = ACTIONS(11),
  },
  [3] = {
    [aux_sym_comment_token1] = ACTIONS(13),
  },
  [4] = {
    [aux_sym_comment_token2] = ACTIONS(13),
  },
  [5] = {
    [sym_comment] = STATE(9),
    [sym__definition] = STATE(9),
    [sym_tag] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_tag_symbol] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(9),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [7] = {
    [sym_parameter_list] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(19),
  },
  [8] = {
    [sym_tag_symbol] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(23),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [sym__definition] = STATE(9),
    [sym_tag] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_tag_symbol] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(30),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(33),
  },
  [10] = {
    [aux_sym_parameters_repeat1] = STATE(14),
    [sym_parameters] = STATE(15),
    [sym_string_parameter] = STATE(14),
    [anon_sym_DOT] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(38),
    [aux_sym_parameters_token1] = ACTIONS(36),
    [sym_identifier] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(42),
  },
  [11] = {
    [sym_body] = STATE(17),
    [sym_tag_symbol] = ACTIONS(44),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(44),
  },
  [12] = {
    [sym_tag_symbol] = ACTIONS(50),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(50),
  },
  [13] = {
    [sym_string] = ACTIONS(54),
  },
  [14] = {
    [aux_sym_parameters_repeat1] = STATE(19),
    [sym_string_parameter] = STATE(19),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(58),
    [aux_sym_parameters_token1] = ACTIONS(56),
    [sym_identifier] = ACTIONS(60),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(42),
  },
  [15] = {
    [anon_sym_RPAREN] = ACTIONS(62),
  },
  [16] = {
    [sym_comment] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [sym_tag] = STATE(25),
    [sym__definition] = STATE(25),
    [sym_definitions] = STATE(26),
    [sym_tag_symbol] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(68),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(70),
  },
  [17] = {
    [sym_tag_symbol] = ACTIONS(72),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(74),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(74),
  },
  [18] = {
    [anon_sym_DQUOTE] = ACTIONS(76),
  },
  [19] = {
    [aux_sym_parameters_repeat1] = STATE(19),
    [sym_string_parameter] = STATE(19),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(81),
    [aux_sym_parameters_token1] = ACTIONS(78),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_in] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(86),
  },
  [20] = {
    [sym_tag_symbol] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(89),
  },
  [21] = {
    [sym_identifier] = ACTIONS(93),
  },
  [22] = {
    [sym_tag_symbol] = ACTIONS(95),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(97),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(97),
  },
  [23] = {
    [aux_sym_comment_token1] = ACTIONS(99),
  },
  [24] = {
    [aux_sym_comment_token2] = ACTIONS(99),
  },
  [25] = {
    [sym_comment] = STATE(30),
    [sym__definition] = STATE(30),
    [sym_tag] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [sym_tag_symbol] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(68),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(70),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(103),
  },
  [27] = {
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [aux_sym_parameters_token1] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_in] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
  },
  [28] = {
    [sym_parameter_list] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(109),
  },
  [29] = {
    [sym_tag_symbol] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(21),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [sym__definition] = STATE(30),
    [sym_tag] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [sym_tag_symbol] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(28),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(114),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(117),
  },
  [31] = {
    [sym_tag_symbol] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(122),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(122),
  },
  [32] = {
    [aux_sym_parameters_repeat1] = STATE(14),
    [sym_parameters] = STATE(35),
    [sym_string_parameter] = STATE(14),
    [anon_sym_DOT] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(124),
    [aux_sym_parameters_token1] = ACTIONS(36),
    [sym_identifier] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(42),
  },
  [33] = {
    [sym_body] = STATE(37),
    [sym_tag_symbol] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(44),
  },
  [34] = {
    [sym_tag_symbol] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(50),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(128),
  },
  [36] = {
    [sym_comment] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [sym_tag] = STATE(25),
    [sym__definition] = STATE(25),
    [sym_definitions] = STATE(40),
    [sym_tag_symbol] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(68),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(70),
  },
  [37] = {
    [sym_tag_symbol] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(72),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(72),
  },
  [38] = {
    [sym_tag_symbol] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(89),
  },
  [39] = {
    [sym_tag_symbol] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(95),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(95),
  },
  [40] = {
    [anon_sym_RBRACE] = ACTIONS(132),
  },
  [41] = {
    [sym_tag_symbol] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(120),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [17] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [25] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.count = 1, .reusable = true}, SHIFT(14),
  [38] = {.count = 1, .reusable = true}, SHIFT(12),
  [40] = {.count = 1, .reusable = false}, SHIFT(14),
  [42] = {.count = 1, .reusable = true}, SHIFT(13),
  [44] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [48] = {.count = 1, .reusable = true}, SHIFT(16),
  [50] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [54] = {.count = 1, .reusable = true}, SHIFT(18),
  [56] = {.count = 1, .reusable = true}, SHIFT(19),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 1),
  [60] = {.count = 1, .reusable = false}, SHIFT(19),
  [62] = {.count = 1, .reusable = true}, SHIFT(20),
  [64] = {.count = 1, .reusable = false}, SHIFT(21),
  [66] = {.count = 1, .reusable = true}, SHIFT(22),
  [68] = {.count = 1, .reusable = false}, SHIFT(23),
  [70] = {.count = 1, .reusable = false}, SHIFT(24),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [76] = {.count = 1, .reusable = true}, SHIFT(27),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(19),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [83] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(19),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [93] = {.count = 1, .reusable = true}, SHIFT(28),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(29),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(31),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_string_parameter, 3),
  [109] = {.count = 1, .reusable = true}, SHIFT(32),
  [111] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [114] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [117] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(34),
  [126] = {.count = 1, .reusable = true}, SHIFT(36),
  [128] = {.count = 1, .reusable = true}, SHIFT(38),
  [130] = {.count = 1, .reusable = true}, SHIFT(39),
  [132] = {.count = 1, .reusable = true}, SHIFT(41),
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
