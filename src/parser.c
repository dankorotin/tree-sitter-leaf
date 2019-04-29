#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 42
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

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
  anon_sym_else = 14,
  sym_source_file = 15,
  sym__definition = 16,
  sym_tag = 17,
  sym_string_parameter = 18,
  sym_operator_parameter = 19,
  sym_name = 20,
  sym_parameter_list = 21,
  sym_body = 22,
  sym_definitions = 23,
  sym_else = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_definitions_repeat1 = 26,
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
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead != 0 &&
          lookahead != '#' &&
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
          lookahead != '{')
        ADVANCE(15);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == 'l')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '#' &&
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead != 0 &&
          lookahead != '#' &&
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
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 21},
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
    [sym_else] = STATE(29),
    [anon_sym_POUND] = ACTIONS(82),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_raw_text] = ACTIONS(82),
    [anon_sym_else] = ACTIONS(86),
    [anon_sym_POUND_POUND] = ACTIONS(84),
  },
  [22] = {
    [sym_parameter_list] = STATE(30),
    [sym_name] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
  [23] = {
    [sym_tag] = STATE(32),
    [aux_sym_definitions_repeat1] = STATE(32),
    [sym__definition] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(64),
    [sym_raw_text] = ACTIONS(90),
    [anon_sym_POUND_POUND] = ACTIONS(68),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(92),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(96),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_raw_text] = ACTIONS(94),
    [anon_sym_POUND_POUND] = ACTIONS(94),
  },
  [26] = {
    [anon_sym_RPAREN] = ACTIONS(98),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(100),
  },
  [28] = {
    [sym_body] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_raw_text] = ACTIONS(102),
    [anon_sym_POUND_POUND] = ACTIONS(102),
  },
  [30] = {
    [sym_body] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym_raw_text] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(31),
  },
  [31] = {
    [sym_parameter_list] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [32] = {
    [sym_tag] = STATE(32),
    [aux_sym_definitions_repeat1] = STATE(32),
    [sym__definition] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(110),
    [sym_raw_text] = ACTIONS(113),
    [anon_sym_POUND_POUND] = ACTIONS(116),
  },
  [33] = {
    [sym_else] = STATE(37),
    [anon_sym_POUND] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_raw_text] = ACTIONS(104),
    [anon_sym_else] = ACTIONS(86),
    [anon_sym_POUND_POUND] = ACTIONS(102),
  },
  [34] = {
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(121),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_raw_text] = ACTIONS(119),
    [anon_sym_POUND_POUND] = ACTIONS(119),
  },
  [35] = {
    [aux_sym_definitions_repeat1] = STATE(23),
    [sym__definition] = STATE(23),
    [sym_tag] = STATE(23),
    [sym_definitions] = STATE(39),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(64),
    [sym_raw_text] = ACTIONS(66),
    [anon_sym_POUND_POUND] = ACTIONS(68),
  },
  [36] = {
    [sym_body] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym_raw_text] = ACTIONS(70),
    [anon_sym_POUND_POUND] = ACTIONS(70),
  },
  [37] = {
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_raw_text] = ACTIONS(125),
    [anon_sym_POUND_POUND] = ACTIONS(125),
  },
  [38] = {
    [sym_else] = STATE(29),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(82),
    [sym_raw_text] = ACTIONS(82),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_POUND_POUND] = ACTIONS(84),
  },
  [39] = {
    [anon_sym_RBRACE] = ACTIONS(131),
  },
  [40] = {
    [sym_body] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(106),
  },
  [41] = {
    [sym_else] = STATE(37),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(104),
    [sym_raw_text] = ACTIONS(104),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_POUND_POUND] = ACTIONS(102),
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
  [86] = {.count = 1, .reusable = false}, SHIFT(28),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_definitions, 1),
  [90] = {.count = 1, .reusable = true}, SHIFT(32),
  [92] = {.count = 1, .reusable = true}, SHIFT(33),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_operator_parameter, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [106] = {.count = 1, .reusable = true}, SHIFT(35),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2),
  [110] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(22),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(32),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(22),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_else, 2),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_else, 2),
  [123] = {.count = 1, .reusable = true}, SHIFT(38),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_body, 4),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_body, 4),
  [129] = {.count = 1, .reusable = false}, SHIFT(40),
  [131] = {.count = 1, .reusable = true}, SHIFT(41),
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
