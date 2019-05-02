#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 46
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_raw_text = 1,
  anon_sym_POUND_SLASH_SLASH = 2,
  anon_sym_POUND_SLASH_STAR = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_POUND = 5,
  sym_identifier = 6,
  sym_string = 7,
  anon_sym_DQUOTE = 8,
  sym_html = 9,
  anon_sym_LPAREN = 10,
  anon_sym_in = 11,
  aux_sym_parameter_list_token1 = 12,
  anon_sym_DOT = 13,
  anon_sym_RPAREN = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_comment = 19,
  sym_tag = 20,
  sym_string_parameter = 21,
  sym_name = 22,
  sym_parameter_list = 23,
  sym_body = 24,
  sym_definitions = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_parameter_list_repeat1 = 27,
  aux_sym_definitions_repeat1 = 28,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_raw_text] = "raw_text",
  [anon_sym_POUND_SLASH_SLASH] = "#//",
  [anon_sym_POUND_SLASH_STAR] = "#/*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND] = "#",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
  [sym_html] = "html",
  [anon_sym_LPAREN] = "(",
  [anon_sym_in] = "in",
  [aux_sym_parameter_list_token1] = "parameter_list_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_comment] = "comment",
  [sym_tag] = "tag",
  [sym_string_parameter] = "string_parameter",
  [sym_name] = "name",
  [sym_parameter_list] = "parameter_list",
  [sym_body] = "body",
  [sym_definitions] = "definitions",
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
  [sym_html] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '/')
        ADVANCE(12);
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
        ADVANCE(13);
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
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_STAR);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_SLASH);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == '\n')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '{' ||
          lookahead == '}')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == '\n')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '{' ||
          lookahead == '}')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(17);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_html);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(23);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 27:
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
        SKIP(27);
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
    case 28:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#')
        ADVANCE(18);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#')
        ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 32},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(1),
    [aux_sym_parameter_list_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_tag] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_comment] = STATE(5),
    [sym__definition] = STATE(5),
    [sym_source_file] = STATE(6),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_raw_text] = ACTIONS(9),
    [sym_html] = ACTIONS(9),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(11),
  },
  [2] = {
    [sym_parameter_list] = STATE(9),
    [sym_name] = STATE(10),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
  },
  [3] = {
    [sym_raw_text] = ACTIONS(17),
  },
  [4] = {
    [aux_sym_comment_token1] = ACTIONS(17),
  },
  [5] = {
    [sym_tag] = STATE(12),
    [sym__definition] = STATE(12),
    [sym_comment] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_raw_text] = ACTIONS(21),
    [sym_html] = ACTIONS(21),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(11),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(25),
  },
  [8] = {
    [aux_sym_parameter_list_repeat1] = STATE(15),
    [sym_string_parameter] = STATE(15),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [aux_sym_parameter_list_token1] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_in] = ACTIONS(33),
  },
  [9] = {
    [sym_body] = STATE(17),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_raw_text] = ACTIONS(35),
    [sym_html] = ACTIONS(35),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(37),
  },
  [10] = {
    [sym_parameter_list] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(15),
  },
  [11] = {
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_raw_text] = ACTIONS(41),
    [sym_html] = ACTIONS(41),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(43),
  },
  [12] = {
    [sym_tag] = STATE(12),
    [sym__definition] = STATE(12),
    [sym_comment] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(48),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_raw_text] = ACTIONS(53),
    [sym_html] = ACTIONS(53),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(56),
  },
  [13] = {
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_raw_text] = ACTIONS(59),
    [sym_html] = ACTIONS(59),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(61),
  },
  [14] = {
    [sym_string] = ACTIONS(63),
  },
  [15] = {
    [aux_sym_parameter_list_repeat1] = STATE(21),
    [sym_string_parameter] = STATE(21),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [aux_sym_parameter_list_token1] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_in] = ACTIONS(69),
  },
  [16] = {
    [sym_tag] = STATE(26),
    [aux_sym_definitions_repeat1] = STATE(26),
    [sym__definition] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_definitions] = STATE(27),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(73),
    [sym_raw_text] = ACTIONS(75),
    [sym_html] = ACTIONS(75),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(79),
  },
  [17] = {
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(83),
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_raw_text] = ACTIONS(81),
    [sym_html] = ACTIONS(81),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(83),
  },
  [18] = {
    [sym_body] = STATE(28),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(83),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_raw_text] = ACTIONS(81),
    [sym_html] = ACTIONS(81),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(83),
  },
  [19] = {
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [20] = {
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_raw_text] = ACTIONS(87),
    [sym_html] = ACTIONS(87),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(89),
  },
  [21] = {
    [aux_sym_parameter_list_repeat1] = STATE(21),
    [sym_string_parameter] = STATE(21),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(94),
    [aux_sym_parameter_list_token1] = ACTIONS(91),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_in] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(99),
  },
  [22] = {
    [sym_parameter_list] = STATE(31),
    [sym_name] = STATE(32),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(102),
  },
  [23] = {
    [sym_raw_text] = ACTIONS(104),
  },
  [24] = {
    [aux_sym_comment_token1] = ACTIONS(104),
  },
  [25] = {
    [anon_sym_POUND] = ACTIONS(106),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_raw_text] = ACTIONS(106),
    [sym_html] = ACTIONS(106),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(108),
  },
  [26] = {
    [sym_tag] = STATE(34),
    [aux_sym_definitions_repeat1] = STATE(34),
    [sym__definition] = STATE(34),
    [sym_comment] = STATE(34),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(73),
    [sym_raw_text] = ACTIONS(110),
    [sym_html] = ACTIONS(110),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(112),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(114),
  },
  [28] = {
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(118),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_raw_text] = ACTIONS(116),
    [sym_html] = ACTIONS(116),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(118),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [aux_sym_parameter_list_token1] = ACTIONS(120),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_in] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(120),
  },
  [30] = {
    [aux_sym_parameter_list_repeat1] = STATE(37),
    [sym_string_parameter] = STATE(37),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [aux_sym_parameter_list_token1] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(126),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_in] = ACTIONS(128),
  },
  [31] = {
    [sym_body] = STATE(39),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_raw_text] = ACTIONS(35),
    [sym_html] = ACTIONS(35),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(35),
  },
  [32] = {
    [sym_parameter_list] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(102),
  },
  [33] = {
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(43),
    [sym_raw_text] = ACTIONS(41),
    [sym_html] = ACTIONS(41),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(41),
  },
  [34] = {
    [sym_tag] = STATE(34),
    [aux_sym_definitions_repeat1] = STATE(34),
    [sym__definition] = STATE(34),
    [sym_comment] = STATE(34),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(135),
    [sym_raw_text] = ACTIONS(138),
    [sym_html] = ACTIONS(138),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(144),
  },
  [35] = {
    [anon_sym_POUND] = ACTIONS(146),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(148),
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_raw_text] = ACTIONS(146),
    [sym_html] = ACTIONS(146),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(148),
  },
  [36] = {
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_raw_text] = ACTIONS(59),
    [sym_html] = ACTIONS(59),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(59),
  },
  [37] = {
    [aux_sym_parameter_list_repeat1] = STATE(21),
    [sym_string_parameter] = STATE(21),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [aux_sym_parameter_list_token1] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(150),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_in] = ACTIONS(69),
  },
  [38] = {
    [sym_tag] = STATE(26),
    [aux_sym_definitions_repeat1] = STATE(26),
    [sym__definition] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_definitions] = STATE(43),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(73),
    [sym_raw_text] = ACTIONS(75),
    [sym_html] = ACTIONS(75),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(152),
  },
  [39] = {
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(83),
    [sym_raw_text] = ACTIONS(81),
    [sym_html] = ACTIONS(81),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(81),
  },
  [40] = {
    [sym_body] = STATE(44),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_raw_text] = ACTIONS(81),
    [sym_html] = ACTIONS(81),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(81),
  },
  [41] = {
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_raw_text] = ACTIONS(87),
    [sym_html] = ACTIONS(87),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(87),
  },
  [42] = {
    [anon_sym_POUND] = ACTIONS(106),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(108),
    [sym_raw_text] = ACTIONS(106),
    [sym_html] = ACTIONS(106),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(106),
  },
  [43] = {
    [anon_sym_RBRACE] = ACTIONS(154),
  },
  [44] = {
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(118),
    [sym_raw_text] = ACTIONS(116),
    [sym_html] = ACTIONS(116),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(116),
  },
  [45] = {
    [anon_sym_POUND] = ACTIONS(146),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(148),
    [sym_raw_text] = ACTIONS(146),
    [sym_html] = ACTIONS(146),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(146),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [21] = {.count = 1, .reusable = false}, SHIFT(12),
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(15),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [39] = {.count = 1, .reusable = false}, SHIFT(16),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [45] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(19),
  [65] = {.count = 1, .reusable = true}, SHIFT(21),
  [67] = {.count = 1, .reusable = true}, SHIFT(20),
  [69] = {.count = 1, .reusable = false}, SHIFT(21),
  [71] = {.count = 1, .reusable = false}, SHIFT(22),
  [73] = {.count = 1, .reusable = true}, SHIFT(23),
  [75] = {.count = 1, .reusable = false}, SHIFT(26),
  [77] = {.count = 1, .reusable = true}, SHIFT(24),
  [79] = {.count = 1, .reusable = false}, SHIFT(25),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [85] = {.count = 1, .reusable = true}, SHIFT(29),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(21),
  [94] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(21),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(14),
  [102] = {.count = 1, .reusable = true}, SHIFT(30),
  [104] = {.count = 1, .reusable = true}, SHIFT(33),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [110] = {.count = 1, .reusable = false}, SHIFT(34),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_definitions, 1),
  [114] = {.count = 1, .reusable = true}, SHIFT(35),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_string_parameter, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(37),
  [126] = {.count = 1, .reusable = true}, SHIFT(36),
  [128] = {.count = 1, .reusable = false}, SHIFT(37),
  [130] = {.count = 1, .reusable = false}, SHIFT(38),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(22),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(23),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(34),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(24),
  [144] = {.count = 1, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [150] = {.count = 1, .reusable = true}, SHIFT(41),
  [152] = {.count = 1, .reusable = false}, SHIFT(42),
  [154] = {.count = 1, .reusable = true}, SHIFT(45),
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
