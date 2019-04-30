#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 51
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_raw_text = 1,
  anon_sym_POUND = 2,
  anon_sym_POUND_POUND = 3,
  sym_identifier = 4,
  sym_string = 5,
  anon_sym_DQUOTE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_in = 8,
  aux_sym_parameter_list_token1 = 9,
  anon_sym_DOT = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_elseif = 14,
  anon_sym_else = 15,
  sym_source_file = 16,
  sym__definition = 17,
  sym_tag = 18,
  sym_string_parameter = 19,
  sym_name = 20,
  sym_parameter_list = 21,
  sym_body = 22,
  sym_definitions = 23,
  sym_else_if = 24,
  sym_else = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_parameter_list_repeat1 = 27,
  aux_sym_definitions_repeat1 = 28,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_raw_text] = "raw_text",
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
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
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
        SKIP(14);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '(')
        ADVANCE(4);
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
        SKIP(17);
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
    case 18:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'e')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{')
        ADVANCE(15);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 'l')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 'e')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == ' ')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 'f')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == ' ')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
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
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 14},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DOT] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_parameter_list_token1] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
  },
  [1] = {
    [sym__definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_tag] = STATE(3),
    [sym_source_file] = STATE(4),
    [anon_sym_POUND] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_raw_text] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
  },
  [2] = {
    [sym_name] = STATE(7),
    [sym_parameter_list] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
  [3] = {
    [sym_tag] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__definition] = STATE(9),
    [anon_sym_POUND] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_raw_text] = ACTIONS(17),
    [anon_sym_POUND_POUND] = ACTIONS(9),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [5] = {
    [sym_string_parameter] = STATE(12),
    [aux_sym_parameter_list_repeat1] = STATE(12),
    [anon_sym_DOT] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [aux_sym_parameter_list_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(23),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(29),
  },
  [7] = {
    [sym_parameter_list] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [8] = {
    [sym_body] = STATE(15),
    [anon_sym_POUND] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_raw_text] = ACTIONS(33),
    [anon_sym_POUND_POUND] = ACTIONS(33),
  },
  [9] = {
    [sym_tag] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__definition] = STATE(9),
    [anon_sym_POUND] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_raw_text] = ACTIONS(42),
    [anon_sym_POUND_POUND] = ACTIONS(45),
  },
  [10] = {
    [sym_string] = ACTIONS(48),
  },
  [11] = {
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_POUND] = ACTIONS(52),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(50),
    [sym_raw_text] = ACTIONS(50),
    [anon_sym_POUND_POUND] = ACTIONS(50),
  },
  [12] = {
    [sym_string_parameter] = STATE(18),
    [aux_sym_parameter_list_repeat1] = STATE(18),
    [anon_sym_DOT] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [aux_sym_parameter_list_token1] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_in] = ACTIONS(56),
  },
  [13] = {
    [sym_body] = STATE(19),
    [anon_sym_POUND] = ACTIONS(60),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_raw_text] = ACTIONS(62),
    [anon_sym_POUND_POUND] = ACTIONS(62),
  },
  [14] = {
    [aux_sym_definitions_repeat1] = STATE(22),
    [sym__definition] = STATE(22),
    [sym_tag] = STATE(22),
    [sym_definitions] = STATE(23),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [sym_raw_text] = ACTIONS(68),
    [anon_sym_POUND_POUND] = ACTIONS(70),
  },
  [15] = {
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_raw_text] = ACTIONS(62),
    [anon_sym_POUND_POUND] = ACTIONS(62),
  },
  [16] = {
    [anon_sym_DQUOTE] = ACTIONS(72),
  },
  [17] = {
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [sym_raw_text] = ACTIONS(74),
    [anon_sym_POUND_POUND] = ACTIONS(74),
  },
  [18] = {
    [sym_string_parameter] = STATE(18),
    [aux_sym_parameter_list_repeat1] = STATE(18),
    [anon_sym_DOT] = ACTIONS(78),
    [sym_identifier] = ACTIONS(81),
    [aux_sym_parameter_list_token1] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_in] = ACTIONS(81),
  },
  [19] = {
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_raw_text] = ACTIONS(89),
    [anon_sym_POUND_POUND] = ACTIONS(89),
  },
  [20] = {
    [sym_else_if] = STATE(27),
    [sym_else] = STATE(27),
    [anon_sym_POUND] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(97),
    [sym_raw_text] = ACTIONS(93),
    [anon_sym_elseif] = ACTIONS(99),
    [anon_sym_POUND_POUND] = ACTIONS(95),
  },
  [21] = {
    [sym_name] = STATE(28),
    [sym_parameter_list] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
  [22] = {
    [sym_tag] = STATE(30),
    [aux_sym_definitions_repeat1] = STATE(30),
    [sym__definition] = STATE(30),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_POUND] = ACTIONS(66),
    [sym_raw_text] = ACTIONS(103),
    [anon_sym_POUND_POUND] = ACTIONS(70),
  },
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(105),
  },
  [24] = {
    [anon_sym_DOT] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [aux_sym_parameter_list_token1] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_in] = ACTIONS(109),
  },
  [25] = {
    [anon_sym_LPAREN] = ACTIONS(111),
  },
  [26] = {
    [sym_body] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(35),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_raw_text] = ACTIONS(113),
    [anon_sym_POUND_POUND] = ACTIONS(113),
  },
  [28] = {
    [sym_parameter_list] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [29] = {
    [sym_body] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_raw_text] = ACTIONS(33),
    [anon_sym_POUND_POUND] = ACTIONS(33),
  },
  [30] = {
    [sym_tag] = STATE(30),
    [aux_sym_definitions_repeat1] = STATE(30),
    [sym__definition] = STATE(30),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(121),
    [sym_raw_text] = ACTIONS(124),
    [anon_sym_POUND_POUND] = ACTIONS(127),
  },
  [31] = {
    [sym_else_if] = STATE(36),
    [sym_else] = STATE(36),
    [anon_sym_POUND] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_else] = ACTIONS(97),
    [sym_raw_text] = ACTIONS(115),
    [anon_sym_elseif] = ACTIONS(99),
    [anon_sym_POUND_POUND] = ACTIONS(113),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(130),
    [sym_identifier] = ACTIONS(132),
  },
  [33] = {
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_raw_text] = ACTIONS(134),
    [anon_sym_POUND_POUND] = ACTIONS(134),
  },
  [34] = {
    [sym_body] = STATE(19),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_raw_text] = ACTIONS(62),
    [anon_sym_POUND_POUND] = ACTIONS(62),
  },
  [35] = {
    [aux_sym_definitions_repeat1] = STATE(22),
    [sym__definition] = STATE(22),
    [sym_tag] = STATE(22),
    [sym_definitions] = STATE(40),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_POUND] = ACTIONS(66),
    [sym_raw_text] = ACTIONS(68),
    [anon_sym_POUND_POUND] = ACTIONS(70),
  },
  [36] = {
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_POUND] = ACTIONS(142),
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_raw_text] = ACTIONS(140),
    [anon_sym_POUND_POUND] = ACTIONS(140),
  },
  [37] = {
    [sym_body] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(35),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(144),
  },
  [39] = {
    [sym_else_if] = STATE(27),
    [sym_else] = STATE(27),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_else] = ACTIONS(146),
    [sym_raw_text] = ACTIONS(93),
    [anon_sym_elseif] = ACTIONS(148),
    [anon_sym_POUND_POUND] = ACTIONS(95),
  },
  [40] = {
    [anon_sym_RBRACE] = ACTIONS(150),
  },
  [41] = {
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_POUND] = ACTIONS(154),
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_raw_text] = ACTIONS(152),
    [anon_sym_POUND_POUND] = ACTIONS(152),
  },
  [42] = {
    [sym_body] = STATE(46),
    [anon_sym_LBRACE] = ACTIONS(35),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(156),
  },
  [44] = {
    [sym_body] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(117),
  },
  [45] = {
    [sym_else_if] = STATE(36),
    [sym_else] = STATE(36),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(146),
    [sym_raw_text] = ACTIONS(115),
    [anon_sym_elseif] = ACTIONS(148),
    [anon_sym_POUND_POUND] = ACTIONS(113),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_POUND] = ACTIONS(160),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_raw_text] = ACTIONS(158),
    [anon_sym_POUND_POUND] = ACTIONS(158),
  },
  [47] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [sym_identifier] = ACTIONS(164),
  },
  [48] = {
    [sym_body] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(117),
  },
  [49] = {
    [anon_sym_RPAREN] = ACTIONS(166),
  },
  [50] = {
    [sym_body] = STATE(46),
    [anon_sym_LBRACE] = ACTIONS(117),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.count = 1, .reusable = true}, SHIFT(16),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [54] = {.count = 1, .reusable = true}, SHIFT(18),
  [56] = {.count = 1, .reusable = false}, SHIFT(18),
  [58] = {.count = 1, .reusable = true}, SHIFT(17),
  [60] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [64] = {.count = 1, .reusable = true}, SHIFT(20),
  [66] = {.count = 1, .reusable = false}, SHIFT(21),
  [68] = {.count = 1, .reusable = true}, SHIFT(22),
  [70] = {.count = 1, .reusable = true}, SHIFT(21),
  [72] = {.count = 1, .reusable = true}, SHIFT(24),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(18),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(18),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(10),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [97] = {.count = 1, .reusable = false}, SHIFT(26),
  [99] = {.count = 1, .reusable = false}, SHIFT(25),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(30),
  [105] = {.count = 1, .reusable = true}, SHIFT(31),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_string_parameter, 3),
  [111] = {.count = 1, .reusable = true}, SHIFT(32),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [117] = {.count = 1, .reusable = true}, SHIFT(35),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(21),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(30),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(21),
  [130] = {.count = 1, .reusable = true}, SHIFT(37),
  [132] = {.count = 1, .reusable = true}, SHIFT(38),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_else, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_else, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(39),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_body, 4),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_body, 4),
  [144] = {.count = 1, .reusable = true}, SHIFT(42),
  [146] = {.count = 1, .reusable = false}, SHIFT(44),
  [148] = {.count = 1, .reusable = false}, SHIFT(43),
  [150] = {.count = 1, .reusable = true}, SHIFT(45),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_else_if, 4),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_else_if, 4),
  [156] = {.count = 1, .reusable = true}, SHIFT(47),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_else_if, 5),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_else_if, 5),
  [162] = {.count = 1, .reusable = true}, SHIFT(48),
  [164] = {.count = 1, .reusable = true}, SHIFT(49),
  [166] = {.count = 1, .reusable = true}, SHIFT(50),
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
