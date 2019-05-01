#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 64
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_raw_text = 1,
  anon_sym_POUND_SLASH_SLASH = 2,
  anon_sym_POUND_SLASH_STAR = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_POUND = 5,
  anon_sym_POUND_POUND = 6,
  sym_identifier = 7,
  sym_string = 8,
  anon_sym_DQUOTE = 9,
  anon_sym_LPAREN = 10,
  anon_sym_in = 11,
  aux_sym_parameter_list_token1 = 12,
  anon_sym_DOT = 13,
  anon_sym_RPAREN = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_elseif = 17,
  anon_sym_else = 18,
  sym_source_file = 19,
  sym__definition = 20,
  sym_comment = 21,
  sym_tag = 22,
  sym_string_parameter = 23,
  sym_name = 24,
  sym_parameter_list = 25,
  sym_body = 26,
  sym_definitions = 27,
  sym_else_if = 28,
  sym_else = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_parameter_list_repeat1 = 31,
  aux_sym_definitions_repeat1 = 32,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_raw_text] = "raw_text",
  [anon_sym_POUND_SLASH_SLASH] = "#//",
  [anon_sym_POUND_SLASH_STAR] = "#/*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_POUND] = "##",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LPAREN] = "(",
  [anon_sym_in] = "in",
  [aux_sym_parameter_list_token1] = "parameter_list_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_elseif] = "else if ",
  [anon_sym_else] = "else ",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_comment] = "comment",
  [sym_tag] = "tag",
  [sym_string_parameter] = "string_parameter",
  [sym_name] = "name",
  [sym_parameter_list] = "parameter_list",
  [sym_body] = "body",
  [sym_definitions] = "definitions",
  [sym_else_if] = "else_if",
  [sym_else] = "else",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_definitions_repeat1] = "definitions_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
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
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
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
  [sym_else_if] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
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
        ADVANCE(14);
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
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
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
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 13:
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_SLASH);
      END_STATE();
    case 17:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'e')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#')
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 's')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#')
        ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#')
        ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == ' ')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#')
        ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'f')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == ' ')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 27:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(28);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 32:
      if (lookahead == '"')
        ADVANCE(2);
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
        SKIP(32);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#')
        ADVANCE(19);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'e')
        ADVANCE(18);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#')
        ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(34);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 37},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_parameter_list_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_tag] = STATE(5),
    [sym__definition] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_source_file] = STATE(6),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_raw_text] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(11),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(13),
  },
  [2] = {
    [sym_parameter_list] = STATE(9),
    [sym_name] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
  [3] = {
    [sym_raw_text] = ACTIONS(19),
  },
  [4] = {
    [aux_sym_comment_token1] = ACTIONS(19),
  },
  [5] = {
    [sym_tag] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym__definition] = STATE(12),
    [sym_comment] = STATE(12),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_raw_text] = ACTIONS(23),
    [anon_sym_POUND_POUND] = ACTIONS(11),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(13),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [sym_string_parameter] = STATE(15),
    [aux_sym_parameter_list_repeat1] = STATE(15),
    [anon_sym_DOT] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym_parameter_list_token1] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_in] = ACTIONS(29),
  },
  [8] = {
    [anon_sym_LPAREN] = ACTIONS(35),
  },
  [9] = {
    [sym_body] = STATE(17),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_raw_text] = ACTIONS(37),
    [anon_sym_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(39),
  },
  [10] = {
    [sym_parameter_list] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(15),
  },
  [11] = {
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_raw_text] = ACTIONS(45),
    [anon_sym_POUND_POUND] = ACTIONS(45),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(45),
  },
  [12] = {
    [sym_tag] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym__definition] = STATE(12),
    [sym_comment] = STATE(12),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(50),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_raw_text] = ACTIONS(55),
    [anon_sym_POUND_POUND] = ACTIONS(58),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(61),
  },
  [13] = {
    [sym_string] = ACTIONS(64),
  },
  [14] = {
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(66),
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_raw_text] = ACTIONS(66),
    [anon_sym_POUND_POUND] = ACTIONS(68),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(68),
  },
  [15] = {
    [sym_string_parameter] = STATE(21),
    [aux_sym_parameter_list_repeat1] = STATE(21),
    [anon_sym_DOT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [aux_sym_parameter_list_token1] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_in] = ACTIONS(72),
  },
  [16] = {
    [sym_tag] = STATE(27),
    [sym__definition] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_definitions] = STATE(26),
    [aux_sym_definitions_repeat1] = STATE(27),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(78),
    [sym_raw_text] = ACTIONS(80),
    [anon_sym_POUND_POUND] = ACTIONS(82),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(86),
  },
  [17] = {
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(90),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_raw_text] = ACTIONS(90),
    [anon_sym_POUND_POUND] = ACTIONS(90),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(90),
  },
  [18] = {
    [sym_body] = STATE(28),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(90),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_raw_text] = ACTIONS(88),
    [anon_sym_POUND_POUND] = ACTIONS(90),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(90),
  },
  [19] = {
    [anon_sym_DQUOTE] = ACTIONS(92),
  },
  [20] = {
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_raw_text] = ACTIONS(94),
    [anon_sym_POUND_POUND] = ACTIONS(96),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(96),
  },
  [21] = {
    [sym_string_parameter] = STATE(21),
    [aux_sym_parameter_list_repeat1] = STATE(21),
    [anon_sym_DOT] = ACTIONS(98),
    [sym_identifier] = ACTIONS(101),
    [aux_sym_parameter_list_token1] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_in] = ACTIONS(101),
  },
  [22] = {
    [sym_parameter_list] = STATE(31),
    [sym_name] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_identifier] = ACTIONS(17),
  },
  [23] = {
    [sym_raw_text] = ACTIONS(111),
  },
  [24] = {
    [aux_sym_comment_token1] = ACTIONS(111),
  },
  [25] = {
    [sym_else] = STATE(36),
    [sym_else_if] = STATE(36),
    [anon_sym_POUND] = ACTIONS(113),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_raw_text] = ACTIONS(113),
    [anon_sym_POUND_POUND] = ACTIONS(115),
    [anon_sym_elseif] = ACTIONS(117),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(115),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(121),
  },
  [27] = {
    [sym_tag] = STATE(38),
    [sym__definition] = STATE(38),
    [sym_comment] = STATE(38),
    [aux_sym_definitions_repeat1] = STATE(38),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(78),
    [sym_raw_text] = ACTIONS(123),
    [anon_sym_POUND_POUND] = ACTIONS(82),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(125),
  },
  [28] = {
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_raw_text] = ACTIONS(129),
    [anon_sym_POUND_POUND] = ACTIONS(129),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(129),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
    [aux_sym_parameter_list_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_in] = ACTIONS(133),
  },
  [30] = {
    [sym_string_parameter] = STATE(40),
    [aux_sym_parameter_list_repeat1] = STATE(40),
    [anon_sym_DOT] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [aux_sym_parameter_list_token1] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_in] = ACTIONS(137),
  },
  [31] = {
    [sym_body] = STATE(42),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(141),
    [sym_raw_text] = ACTIONS(37),
    [anon_sym_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(37),
  },
  [32] = {
    [sym_parameter_list] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(109),
  },
  [33] = {
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(45),
    [sym_raw_text] = ACTIONS(43),
    [anon_sym_POUND_POUND] = ACTIONS(45),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(43),
  },
  [34] = {
    [sym_parameter_list] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(143),
  },
  [35] = {
    [sym_body] = STATE(46),
    [anon_sym_LBRACE] = ACTIONS(145),
  },
  [36] = {
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_raw_text] = ACTIONS(149),
    [anon_sym_POUND_POUND] = ACTIONS(149),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(149),
  },
  [37] = {
    [sym_else] = STATE(47),
    [sym_else_if] = STATE(47),
    [anon_sym_POUND] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_raw_text] = ACTIONS(147),
    [anon_sym_POUND_POUND] = ACTIONS(149),
    [anon_sym_elseif] = ACTIONS(117),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(149),
  },
  [38] = {
    [sym_tag] = STATE(38),
    [sym__definition] = STATE(38),
    [sym_comment] = STATE(38),
    [aux_sym_definitions_repeat1] = STATE(38),
    [anon_sym_POUND] = ACTIONS(151),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(154),
    [sym_raw_text] = ACTIONS(157),
    [anon_sym_POUND_POUND] = ACTIONS(160),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(166),
  },
  [39] = {
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(66),
    [sym_raw_text] = ACTIONS(66),
    [anon_sym_POUND_POUND] = ACTIONS(68),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(66),
  },
  [40] = {
    [sym_string_parameter] = STATE(21),
    [aux_sym_parameter_list_repeat1] = STATE(21),
    [anon_sym_DOT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [aux_sym_parameter_list_token1] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_in] = ACTIONS(72),
  },
  [41] = {
    [sym_tag] = STATE(27),
    [sym__definition] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_definitions] = STATE(50),
    [aux_sym_definitions_repeat1] = STATE(27),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(78),
    [sym_raw_text] = ACTIONS(80),
    [anon_sym_POUND_POUND] = ACTIONS(82),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(170),
  },
  [42] = {
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(90),
    [sym_raw_text] = ACTIONS(88),
    [anon_sym_POUND_POUND] = ACTIONS(90),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(88),
  },
  [43] = {
    [sym_body] = STATE(51),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(141),
    [sym_raw_text] = ACTIONS(88),
    [anon_sym_POUND_POUND] = ACTIONS(90),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(88),
  },
  [44] = {
    [sym_string_parameter] = STATE(53),
    [aux_sym_parameter_list_repeat1] = STATE(53),
    [anon_sym_DOT] = ACTIONS(172),
    [sym_identifier] = ACTIONS(174),
    [aux_sym_parameter_list_token1] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_in] = ACTIONS(174),
  },
  [45] = {
    [sym_body] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(145),
  },
  [46] = {
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(180),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_raw_text] = ACTIONS(180),
    [anon_sym_POUND_POUND] = ACTIONS(180),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(180),
  },
  [47] = {
    [anon_sym_POUND] = ACTIONS(182),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(184),
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_raw_text] = ACTIONS(184),
    [anon_sym_POUND_POUND] = ACTIONS(184),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(184),
  },
  [48] = {
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_raw_text] = ACTIONS(94),
    [anon_sym_POUND_POUND] = ACTIONS(96),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(94),
  },
  [49] = {
    [sym_else] = STATE(57),
    [sym_else_if] = STATE(57),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_elseif] = ACTIONS(186),
    [sym_raw_text] = ACTIONS(113),
    [anon_sym_POUND_POUND] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(188),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(115),
  },
  [50] = {
    [anon_sym_RBRACE] = ACTIONS(190),
  },
  [51] = {
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(129),
    [sym_raw_text] = ACTIONS(127),
    [anon_sym_POUND_POUND] = ACTIONS(129),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(127),
  },
  [52] = {
    [anon_sym_LBRACE] = ACTIONS(68),
  },
  [53] = {
    [sym_string_parameter] = STATE(21),
    [aux_sym_parameter_list_repeat1] = STATE(21),
    [anon_sym_DOT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [aux_sym_parameter_list_token1] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_in] = ACTIONS(72),
  },
  [54] = {
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(196),
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_raw_text] = ACTIONS(196),
    [anon_sym_POUND_POUND] = ACTIONS(196),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(196),
  },
  [55] = {
    [sym_parameter_list] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(143),
  },
  [56] = {
    [sym_body] = STATE(61),
    [anon_sym_LBRACE] = ACTIONS(198),
  },
  [57] = {
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(149),
    [sym_raw_text] = ACTIONS(147),
    [anon_sym_POUND_POUND] = ACTIONS(149),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(147),
  },
  [58] = {
    [sym_else] = STATE(62),
    [sym_else_if] = STATE(62),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_elseif] = ACTIONS(186),
    [sym_raw_text] = ACTIONS(147),
    [anon_sym_POUND_POUND] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_else] = ACTIONS(188),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(149),
  },
  [59] = {
    [anon_sym_LBRACE] = ACTIONS(96),
  },
  [60] = {
    [sym_body] = STATE(63),
    [anon_sym_LBRACE] = ACTIONS(198),
  },
  [61] = {
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(180),
    [sym_raw_text] = ACTIONS(178),
    [anon_sym_POUND_POUND] = ACTIONS(180),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(178),
  },
  [62] = {
    [anon_sym_POUND] = ACTIONS(182),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(184),
    [sym_raw_text] = ACTIONS(182),
    [anon_sym_POUND_POUND] = ACTIONS(184),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(182),
  },
  [63] = {
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(196),
    [sym_raw_text] = ACTIONS(194),
    [anon_sym_POUND_POUND] = ACTIONS(196),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(194),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [41] = {.count = 1, .reusable = false}, SHIFT(16),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [47] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [64] = {.count = 1, .reusable = true}, SHIFT(19),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [70] = {.count = 1, .reusable = true}, SHIFT(21),
  [72] = {.count = 1, .reusable = false}, SHIFT(21),
  [74] = {.count = 1, .reusable = true}, SHIFT(20),
  [76] = {.count = 1, .reusable = false}, SHIFT(22),
  [78] = {.count = 1, .reusable = true}, SHIFT(23),
  [80] = {.count = 1, .reusable = false}, SHIFT(27),
  [82] = {.count = 1, .reusable = true}, SHIFT(22),
  [84] = {.count = 1, .reusable = true}, SHIFT(24),
  [86] = {.count = 1, .reusable = false}, SHIFT(25),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [92] = {.count = 1, .reusable = true}, SHIFT(29),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(21),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(21),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(13),
  [107] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(30),
  [111] = {.count = 1, .reusable = true}, SHIFT(33),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(34),
  [119] = {.count = 1, .reusable = false}, SHIFT(35),
  [121] = {.count = 1, .reusable = true}, SHIFT(37),
  [123] = {.count = 1, .reusable = false}, SHIFT(38),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_definitions, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_string_parameter, 3),
  [135] = {.count = 1, .reusable = true}, SHIFT(40),
  [137] = {.count = 1, .reusable = false}, SHIFT(40),
  [139] = {.count = 1, .reusable = true}, SHIFT(39),
  [141] = {.count = 1, .reusable = false}, SHIFT(41),
  [143] = {.count = 1, .reusable = true}, SHIFT(44),
  [145] = {.count = 1, .reusable = true}, SHIFT(16),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [151] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(22),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(23),
  [157] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(38),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(22),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(24),
  [166] = {.count = 1, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2),
  [168] = {.count = 1, .reusable = true}, SHIFT(48),
  [170] = {.count = 1, .reusable = false}, SHIFT(49),
  [172] = {.count = 1, .reusable = true}, SHIFT(53),
  [174] = {.count = 1, .reusable = false}, SHIFT(53),
  [176] = {.count = 1, .reusable = true}, SHIFT(52),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_else, 2),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_else, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_body, 4),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_body, 4),
  [186] = {.count = 1, .reusable = true}, SHIFT(55),
  [188] = {.count = 1, .reusable = false}, SHIFT(56),
  [190] = {.count = 1, .reusable = true}, SHIFT(58),
  [192] = {.count = 1, .reusable = true}, SHIFT(59),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_else_if, 3),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_else_if, 3),
  [198] = {.count = 1, .reusable = true}, SHIFT(41),
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
