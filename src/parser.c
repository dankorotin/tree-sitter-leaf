#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 48
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_POUND_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_POUND_SLASH_SLASH = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_POUND_SLASH_STAR = 5,
  aux_sym_comment_token2 = 6,
  sym_tag_symbol = 7,
  sym_identifier = 8,
  sym_string = 9,
  anon_sym_DQUOTE = 10,
  anon_sym_LPAREN = 11,
  anon_sym_in = 12,
  aux_sym_parameters_token1 = 13,
  anon_sym_DOT = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_tag = 19,
  sym_variable = 20,
  sym_comment = 21,
  sym_string_parameter = 22,
  sym_parameter_list = 23,
  sym_parameters = 24,
  sym_body = 25,
  sym_definitions = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_parameters_repeat1 = 28,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND_SLASH_SLASH] = "#//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SLASH_STAR] = "#/*",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_tag_symbol] = "tag_symbol",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LPAREN] = "(",
  [anon_sym_in] = "in",
  [aux_sym_parameters_token1] = "parameters_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_tag] = "tag",
  [sym_variable] = "variable",
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
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym_variable] = {
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
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(7);
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
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 7:
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_SLASH);
      END_STATE();
    case 10:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead != 0)
        SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 16:
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
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == 'n')
        ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_parameters_token1);
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead != 0)
        SKIP(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{')
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '}')
        ADVANCE(34);
      if (lookahead != 0)
        SKIP(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '"')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 33},
  [47] = {.lex_state = 33},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(1),
    [sym_tag_symbol] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(6),
    [sym__definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_tag] = STATE(6),
    [sym_source_file] = STATE(7),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_tag_symbol] = ACTIONS(7),
    [anon_sym_POUND_LPAREN] = ACTIONS(9),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(11),
  },
  [2] = {
    [aux_sym_comment_token2] = ACTIONS(13),
  },
  [3] = {
    [sym_identifier] = ACTIONS(15),
  },
  [4] = {
    [sym_identifier] = ACTIONS(17),
  },
  [5] = {
    [aux_sym_comment_token1] = ACTIONS(13),
  },
  [6] = {
    [sym_variable] = STATE(11),
    [sym_comment] = STATE(11),
    [sym__definition] = STATE(11),
    [sym_tag] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_tag_symbol] = ACTIONS(7),
    [anon_sym_POUND_LPAREN] = ACTIONS(9),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(11),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [8] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(23),
    [sym_tag_symbol] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND_LPAREN] = ACTIONS(23),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(23),
  },
  [9] = {
    [sym_parameter_list] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(27),
  },
  [10] = {
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [11] = {
    [sym_variable] = STATE(11),
    [sym_comment] = STATE(11),
    [sym__definition] = STATE(11),
    [sym_tag] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(31),
    [sym_tag_symbol] = ACTIONS(34),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(42),
  },
  [12] = {
    [aux_sym_parameters_repeat1] = STATE(17),
    [sym_parameters] = STATE(18),
    [sym_string_parameter] = STATE(17),
    [aux_sym_parameters_token1] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_identifier] = ACTIONS(51),
  },
  [13] = {
    [sym_body] = STATE(20),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(53),
    [sym_tag_symbol] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(53),
  },
  [14] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(59),
    [sym_tag_symbol] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_POUND_LPAREN] = ACTIONS(59),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(59),
  },
  [15] = {
    [sym_string] = ACTIONS(63),
  },
  [16] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(65),
    [sym_tag_symbol] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_POUND_LPAREN] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(65),
  },
  [17] = {
    [aux_sym_parameters_repeat1] = STATE(22),
    [sym_string_parameter] = STATE(22),
    [aux_sym_parameters_token1] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(73),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [19] = {
    [sym_variable] = STATE(29),
    [sym_comment] = STATE(29),
    [sym__definition] = STATE(29),
    [sym_tag] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [sym_definitions] = STATE(30),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [sym_tag_symbol] = ACTIONS(79),
    [anon_sym_POUND_LPAREN] = ACTIONS(81),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
  },
  [20] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(87),
    [sym_tag_symbol] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(87),
  },
  [21] = {
    [anon_sym_DQUOTE] = ACTIONS(91),
  },
  [22] = {
    [aux_sym_parameters_repeat1] = STATE(22),
    [sym_string_parameter] = STATE(22),
    [aux_sym_parameters_token1] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_in] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_identifier] = ACTIONS(101),
  },
  [23] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(104),
    [sym_tag_symbol] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_POUND_LPAREN] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(104),
  },
  [24] = {
    [aux_sym_comment_token2] = ACTIONS(108),
  },
  [25] = {
    [sym_identifier] = ACTIONS(110),
  },
  [26] = {
    [sym_identifier] = ACTIONS(112),
  },
  [27] = {
    [aux_sym_comment_token1] = ACTIONS(108),
  },
  [28] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(114),
    [sym_tag_symbol] = ACTIONS(116),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_POUND_LPAREN] = ACTIONS(114),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(114),
  },
  [29] = {
    [sym_variable] = STATE(35),
    [sym_comment] = STATE(35),
    [sym__definition] = STATE(35),
    [sym_tag] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [sym_tag_symbol] = ACTIONS(79),
    [anon_sym_POUND_LPAREN] = ACTIONS(81),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(118),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(120),
  },
  [31] = {
    [aux_sym_parameters_token1] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_in] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_identifier] = ACTIONS(124),
  },
  [32] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(25),
    [sym_tag_symbol] = ACTIONS(25),
    [anon_sym_POUND_LPAREN] = ACTIONS(25),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [33] = {
    [sym_parameter_list] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(126),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(128),
  },
  [35] = {
    [sym_variable] = STATE(35),
    [sym_comment] = STATE(35),
    [sym__definition] = STATE(35),
    [sym_tag] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(130),
    [sym_tag_symbol] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(136),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(37),
  },
  [36] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(142),
    [sym_tag_symbol] = ACTIONS(144),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_POUND_LPAREN] = ACTIONS(142),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(142),
  },
  [37] = {
    [aux_sym_parameters_repeat1] = STATE(17),
    [sym_parameters] = STATE(41),
    [sym_string_parameter] = STATE(17),
    [aux_sym_parameters_token1] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_identifier] = ACTIONS(51),
  },
  [38] = {
    [sym_body] = STATE(43),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(53),
    [sym_tag_symbol] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_POUND_LPAREN] = ACTIONS(53),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(55),
  },
  [39] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(61),
    [sym_tag_symbol] = ACTIONS(61),
    [anon_sym_POUND_LPAREN] = ACTIONS(61),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(59),
  },
  [40] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(65),
    [sym_tag_symbol] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_POUND_LPAREN] = ACTIONS(65),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(67),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(150),
  },
  [42] = {
    [sym_variable] = STATE(29),
    [sym_comment] = STATE(29),
    [sym__definition] = STATE(29),
    [sym_tag] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [sym_definitions] = STATE(46),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [sym_tag_symbol] = ACTIONS(79),
    [anon_sym_POUND_LPAREN] = ACTIONS(81),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(152),
  },
  [43] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(89),
    [sym_tag_symbol] = ACTIONS(89),
    [anon_sym_POUND_LPAREN] = ACTIONS(89),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(87),
  },
  [44] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(104),
    [sym_tag_symbol] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_POUND_LPAREN] = ACTIONS(104),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(106),
  },
  [45] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(116),
    [sym_tag_symbol] = ACTIONS(116),
    [anon_sym_POUND_LPAREN] = ACTIONS(116),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(114),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(154),
  },
  [47] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(144),
    [sym_tag_symbol] = ACTIONS(144),
    [anon_sym_POUND_LPAREN] = ACTIONS(144),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(142),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [21] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, SHIFT(15),
  [49] = {.count = 1, .reusable = true}, SHIFT(16),
  [51] = {.count = 1, .reusable = false}, SHIFT(17),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [57] = {.count = 1, .reusable = true}, SHIFT(19),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 3),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 3),
  [63] = {.count = 1, .reusable = true}, SHIFT(21),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [69] = {.count = 1, .reusable = true}, SHIFT(22),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 1),
  [73] = {.count = 1, .reusable = false}, SHIFT(22),
  [75] = {.count = 1, .reusable = true}, SHIFT(23),
  [77] = {.count = 1, .reusable = false}, SHIFT(24),
  [79] = {.count = 1, .reusable = false}, SHIFT(25),
  [81] = {.count = 1, .reusable = false}, SHIFT(26),
  [83] = {.count = 1, .reusable = false}, SHIFT(27),
  [85] = {.count = 1, .reusable = true}, SHIFT(28),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [91] = {.count = 1, .reusable = true}, SHIFT(31),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(22),
  [96] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(22),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [108] = {.count = 1, .reusable = true}, SHIFT(32),
  [110] = {.count = 1, .reusable = true}, SHIFT(33),
  [112] = {.count = 1, .reusable = true}, SHIFT(34),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [120] = {.count = 1, .reusable = true}, SHIFT(36),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_string_parameter, 3),
  [126] = {.count = 1, .reusable = true}, SHIFT(37),
  [128] = {.count = 1, .reusable = true}, SHIFT(39),
  [130] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [133] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [136] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [146] = {.count = 1, .reusable = true}, SHIFT(40),
  [148] = {.count = 1, .reusable = true}, SHIFT(42),
  [150] = {.count = 1, .reusable = true}, SHIFT(44),
  [152] = {.count = 1, .reusable = true}, SHIFT(45),
  [154] = {.count = 1, .reusable = true}, SHIFT(47),
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
