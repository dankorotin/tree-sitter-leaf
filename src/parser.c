#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 54
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
  anon_sym_in = 7,
  aux_sym_operator_parameter_token1 = 8,
  anon_sym_DOT = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_elseif = 14,
  anon_sym_else = 15,
  sym_source_file = 16,
  sym__definition = 17,
  sym_tag = 18,
  sym_string_parameter = 19,
  sym_operator_parameter = 20,
  sym_name = 21,
  sym_parameter_list = 22,
  sym_body = 23,
  sym_definitions = 24,
  sym_else_if = 25,
  sym_else = 26,
  aux_sym_source_file_repeat1 = 27,
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
  [anon_sym_in] = "in",
  [aux_sym_operator_parameter_token1] = "operator_parameter_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_elseif] = "else if ",
  [anon_sym_else] = "else ",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_tag] = "tag",
  [sym_string_parameter] = "string_parameter",
  [sym_operator_parameter] = "operator_parameter",
  [sym_name] = "name",
  [sym_parameter_list] = "parameter_list",
  [sym_body] = "body",
  [sym_definitions] = "definitions",
  [sym_else_if] = "else_if",
  [sym_else] = "else",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
      ACCEPT_TOKEN(aux_sym_operator_parameter_token1);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
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
        SKIP(20);
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
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{')
        ADVANCE(15);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 'l')
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
      if (lookahead == 's')
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == ' ')
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
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
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
      if (lookahead == 'f')
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
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == ' ')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
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
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 14},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_LPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [aux_sym_operator_parameter_token1] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym__definition] = STATE(3),
    [sym_tag] = STATE(3),
    [sym_source_file] = STATE(4),
    [anon_sym_POUND] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_raw_text] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
  },
  [2] = {
    [sym_parameter_list] = STATE(7),
    [sym_name] = STATE(8),
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
    [sym_string_parameter] = STATE(13),
    [sym_operator_parameter] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(27),
  },
  [7] = {
    [sym_body] = STATE(15),
    [anon_sym_POUND] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_raw_text] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(31),
  },
  [8] = {
    [sym_parameter_list] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [9] = {
    [sym_tag] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__definition] = STATE(9),
    [anon_sym_POUND] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_raw_text] = ACTIONS(40),
    [anon_sym_POUND_POUND] = ACTIONS(43),
  },
  [10] = {
    [sym_string] = ACTIONS(46),
  },
  [11] = {
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(50),
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_raw_text] = ACTIONS(48),
    [anon_sym_POUND_POUND] = ACTIONS(48),
  },
  [12] = {
    [sym_operator_parameter] = STATE(19),
    [anon_sym_in] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(58),
    [aux_sym_operator_parameter_token1] = ACTIONS(56),
  },
  [13] = {
    [anon_sym_RPAREN] = ACTIONS(60),
  },
  [14] = {
    [aux_sym_definitions_repeat1] = STATE(23),
    [sym__definition] = STATE(23),
    [sym_tag] = STATE(23),
    [sym_definitions] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(64),
    [sym_raw_text] = ACTIONS(66),
    [anon_sym_POUND_POUND] = ACTIONS(68),
  },
  [15] = {
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(72),
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_raw_text] = ACTIONS(70),
    [anon_sym_POUND_POUND] = ACTIONS(70),
  },
  [16] = {
    [sym_body] = STATE(25),
    [anon_sym_POUND] = ACTIONS(72),
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_raw_text] = ACTIONS(70),
    [anon_sym_POUND_POUND] = ACTIONS(70),
  },
  [17] = {
    [anon_sym_DQUOTE] = ACTIONS(74),
  },
  [18] = {
    [sym_operator_parameter] = STATE(27),
    [anon_sym_RPAREN] = ACTIONS(76),
    [sym_identifier] = ACTIONS(25),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(76),
  },
  [20] = {
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_POUND] = ACTIONS(80),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [sym_raw_text] = ACTIONS(78),
    [anon_sym_POUND_POUND] = ACTIONS(78),
  },
  [21] = {
    [sym_else] = STATE(30),
    [sym_else_if] = STATE(30),
    [anon_sym_POUND] = ACTIONS(82),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_else] = ACTIONS(86),
    [sym_raw_text] = ACTIONS(82),
    [anon_sym_elseif] = ACTIONS(88),
    [anon_sym_POUND_POUND] = ACTIONS(84),
  },
  [22] = {
    [sym_parameter_list] = STATE(31),
    [sym_name] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
  [23] = {
    [sym_tag] = STATE(33),
    [aux_sym_definitions_repeat1] = STATE(33),
    [sym__definition] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(64),
    [sym_raw_text] = ACTIONS(92),
    [anon_sym_POUND_POUND] = ACTIONS(68),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(94),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(98),
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_raw_text] = ACTIONS(96),
    [anon_sym_POUND_POUND] = ACTIONS(96),
  },
  [26] = {
    [anon_sym_RPAREN] = ACTIONS(100),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(102),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(104),
  },
  [29] = {
    [sym_body] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_raw_text] = ACTIONS(106),
    [anon_sym_POUND_POUND] = ACTIONS(106),
  },
  [31] = {
    [sym_body] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym_raw_text] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(31),
  },
  [32] = {
    [sym_parameter_list] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [33] = {
    [sym_tag] = STATE(33),
    [aux_sym_definitions_repeat1] = STATE(33),
    [sym__definition] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(114),
    [sym_raw_text] = ACTIONS(117),
    [anon_sym_POUND_POUND] = ACTIONS(120),
  },
  [34] = {
    [sym_else] = STATE(39),
    [sym_else_if] = STATE(39),
    [anon_sym_POUND] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_else] = ACTIONS(86),
    [sym_raw_text] = ACTIONS(108),
    [anon_sym_elseif] = ACTIONS(88),
    [anon_sym_POUND_POUND] = ACTIONS(106),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
  },
  [36] = {
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_POUND] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_raw_text] = ACTIONS(127),
    [anon_sym_POUND_POUND] = ACTIONS(127),
  },
  [37] = {
    [aux_sym_definitions_repeat1] = STATE(23),
    [sym__definition] = STATE(23),
    [sym_tag] = STATE(23),
    [sym_definitions] = STATE(43),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(64),
    [sym_raw_text] = ACTIONS(66),
    [anon_sym_POUND_POUND] = ACTIONS(68),
  },
  [38] = {
    [sym_body] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym_raw_text] = ACTIONS(70),
    [anon_sym_POUND_POUND] = ACTIONS(70),
  },
  [39] = {
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_raw_text] = ACTIONS(133),
    [anon_sym_POUND_POUND] = ACTIONS(133),
  },
  [40] = {
    [sym_body] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(137),
  },
  [42] = {
    [sym_else] = STATE(30),
    [sym_else_if] = STATE(30),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(82),
    [anon_sym_else] = ACTIONS(139),
    [sym_raw_text] = ACTIONS(82),
    [anon_sym_elseif] = ACTIONS(141),
    [anon_sym_POUND_POUND] = ACTIONS(84),
  },
  [43] = {
    [anon_sym_RBRACE] = ACTIONS(143),
  },
  [44] = {
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_raw_text] = ACTIONS(145),
    [anon_sym_POUND_POUND] = ACTIONS(145),
  },
  [45] = {
    [sym_body] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(149),
  },
  [47] = {
    [sym_body] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(110),
  },
  [48] = {
    [sym_else] = STATE(39),
    [sym_else_if] = STATE(39),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_else] = ACTIONS(139),
    [sym_raw_text] = ACTIONS(108),
    [anon_sym_elseif] = ACTIONS(141),
    [anon_sym_POUND_POUND] = ACTIONS(106),
  },
  [49] = {
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_raw_text] = ACTIONS(151),
    [anon_sym_POUND_POUND] = ACTIONS(151),
  },
  [50] = {
    [anon_sym_RPAREN] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
  },
  [51] = {
    [sym_body] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(110),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(159),
  },
  [53] = {
    [sym_body] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(110),
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
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.count = 1, .reusable = true}, SHIFT(17),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [50] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [52] = {.count = 1, .reusable = false}, SHIFT(18),
  [54] = {.count = 1, .reusable = false}, SHIFT(12),
  [56] = {.count = 1, .reusable = true}, SHIFT(18),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_operator_parameter, 1),
  [60] = {.count = 1, .reusable = true}, SHIFT(20),
  [62] = {.count = 1, .reusable = true}, SHIFT(21),
  [64] = {.count = 1, .reusable = false}, SHIFT(22),
  [66] = {.count = 1, .reusable = true}, SHIFT(23),
  [68] = {.count = 1, .reusable = true}, SHIFT(22),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [74] = {.count = 1, .reusable = true}, SHIFT(26),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_operator_parameter, 2),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [86] = {.count = 1, .reusable = false}, SHIFT(29),
  [88] = {.count = 1, .reusable = false}, SHIFT(28),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(33),
  [94] = {.count = 1, .reusable = true}, SHIFT(34),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_operator_parameter, 3),
  [104] = {.count = 1, .reusable = true}, SHIFT(35),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(37),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2),
  [114] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(22),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(33),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(22),
  [123] = {.count = 1, .reusable = true}, SHIFT(40),
  [125] = {.count = 1, .reusable = true}, SHIFT(41),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_else, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_else, 2),
  [131] = {.count = 1, .reusable = true}, SHIFT(42),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_body, 4),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_body, 4),
  [137] = {.count = 1, .reusable = true}, SHIFT(45),
  [139] = {.count = 1, .reusable = false}, SHIFT(47),
  [141] = {.count = 1, .reusable = false}, SHIFT(46),
  [143] = {.count = 1, .reusable = true}, SHIFT(48),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_else_if, 4),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_else_if, 4),
  [149] = {.count = 1, .reusable = true}, SHIFT(50),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_else_if, 5),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_else_if, 5),
  [155] = {.count = 1, .reusable = true}, SHIFT(51),
  [157] = {.count = 1, .reusable = true}, SHIFT(52),
  [159] = {.count = 1, .reusable = true}, SHIFT(53),
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
