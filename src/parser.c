#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 91
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 1
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_POUND_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_POUND_SLASH_SLASH = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_POUND_SLASH_STAR = 5,
  aux_sym_comment_token2 = 6,
  sym__tag_symbol = 7,
  sym_identifier = 8,
  sym_string = 9,
  anon_sym_DQUOTE = 10,
  anon_sym_in = 11,
  aux_sym_operator_token1 = 12,
  anon_sym_DOT = 13,
  anon_sym_LPAREN = 14,
  anon_sym_elseif = 15,
  anon_sym_else = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  sym_source_file = 19,
  sym__definition = 20,
  sym_tag = 21,
  sym__tag_components = 22,
  sym_variable = 23,
  sym_comment = 24,
  sym_string_parameter = 25,
  sym_operator = 26,
  sym_parameter_list = 27,
  sym__parameters = 28,
  sym_else_if = 29,
  sym_else = 30,
  sym_body = 31,
  sym__definitions = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym__parameters_repeat1 = 34,
  anon_alias_sym_tag_name = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND_SLASH_SLASH] = "#//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SLASH_STAR] = "#/*",
  [aux_sym_comment_token2] = "comment_token2",
  [sym__tag_symbol] = "_tag_symbol",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_in] = "in",
  [aux_sym_operator_token1] = "operator_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_tag] = "tag",
  [sym__tag_components] = "_tag_components",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [sym_string_parameter] = "string_parameter",
  [sym_operator] = "operator",
  [sym_parameter_list] = "parameter_list",
  [sym__parameters] = "_parameters",
  [sym_else_if] = "else_if",
  [sym_else] = "else",
  [sym_body] = "body",
  [sym__definitions] = "_definitions",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [anon_alias_sym_tag_name] = "tag_name",
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
  [sym__tag_symbol] = {
    .visible = false,
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
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token1] = {
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
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [sym__tag_components] = {
    .visible = false,
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
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
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
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__definitions] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_tag_name] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_tag_name,
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
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__tag_symbol);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 'l')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        SKIP(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__tag_symbol);
      if (lookahead == '#')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 8:
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 's')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        SKIP(10);
      END_STATE();
    case 10:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        SKIP(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_SLASH);
      END_STATE();
    case 13:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        SKIP(10);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 'l')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 'i')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        SKIP(10);
      END_STATE();
    case 16:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 'f')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        SKIP(10);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead != 0)
        SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '(')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(')
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ')')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')')
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '"')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '"')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == '"')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(30);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead == '"')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead != 0)
        SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'l')
        ADVANCE(40);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead != 0)
        SKIP(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 's')
        ADVANCE(42);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead != 0)
        SKIP(41);
      END_STATE();
    case 41:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead != 0)
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead != 0)
        SKIP(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(44);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'l')
        ADVANCE(40);
      if (lookahead == '{')
        ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(45);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead != 0)
        SKIP(41);
      END_STATE();
    case 45:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead != 0)
        SKIP(41);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == '#')
        ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '"')
        SKIP(47);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"')
        ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"')
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '}')
        ADVANCE(51);
      if (lookahead != 0)
        SKIP(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{')
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead != 0)
        SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'l')
        ADVANCE(56);
      if (lookahead != 0)
        SKIP(57);
      END_STATE();
    case 56:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 's')
        ADVANCE(58);
      if (lookahead != 0)
        SKIP(57);
      END_STATE();
    case 57:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead != 0)
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(59);
      if (lookahead != 0)
        SKIP(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'l')
        ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead != 0)
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 'l')
        ADVANCE(62);
      if (lookahead != 0)
        SKIP(63);
      END_STATE();
    case 62:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 's')
        ADVANCE(64);
      if (lookahead != 0)
        SKIP(63);
      END_STATE();
    case 63:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead != 0)
        SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(65);
      if (lookahead != 0)
        SKIP(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(66);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 'l')
        ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 'i')
        ADVANCE(67);
      if (lookahead != 0)
        SKIP(63);
      END_STATE();
    case 67:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 'f')
        ADVANCE(68);
      if (lookahead != 0)
        SKIP(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == '"')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead != 0)
        SKIP(71);
      END_STATE();
    case 72:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'l')
        ADVANCE(74);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead != 0)
        SKIP(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 's')
        ADVANCE(75);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead != 0)
        SKIP(71);
      END_STATE();
    case 75:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead != 0)
        SKIP(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'l')
        ADVANCE(74);
      if (lookahead == '}')
        ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead != 0)
        SKIP(77);
      END_STATE();
    case 78:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'l')
        ADVANCE(80);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead != 0)
        SKIP(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 's')
        ADVANCE(81);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead != 0)
        SKIP(77);
      END_STATE();
    case 81:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead != 0)
        SKIP(77);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'l')
        ADVANCE(80);
      if (lookahead == '}')
        ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'i')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead != 0)
        SKIP(77);
      END_STATE();
    case 84:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(85);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead != 0)
        SKIP(77);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 60},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 60},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 60},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 30},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 50},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 50},
  [71] = {.lex_state = 77},
  [72] = {.lex_state = 54},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 77},
  [75] = {.lex_state = 50},
  [76] = {.lex_state = 52},
  [77] = {.lex_state = 50},
  [78] = {.lex_state = 50},
  [79] = {.lex_state = 50},
  [80] = {.lex_state = 71},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 50},
  [83] = {.lex_state = 71},
  [84] = {.lex_state = 50},
  [85] = {.lex_state = 50},
  [86] = {.lex_state = 50},
  [87] = {.lex_state = 71},
  [88] = {.lex_state = 50},
  [89] = {.lex_state = 50},
  [90] = {.lex_state = 71},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__tag_symbol] = ACTIONS(1),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_variable] = STATE(6),
    [sym__definition] = STATE(6),
    [sym_tag] = STATE(6),
    [sym_source_file] = STATE(7),
    [sym_comment] = STATE(6),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__tag_symbol] = ACTIONS(7),
    [anon_sym_POUND_LPAREN] = ACTIONS(9),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(11),
  },
  [2] = {
    [aux_sym_comment_token2] = ACTIONS(13),
  },
  [3] = {
    [sym__tag_components] = STATE(10),
    [sym_identifier] = ACTIONS(15),
  },
  [4] = {
    [sym_identifier] = ACTIONS(17),
  },
  [5] = {
    [aux_sym_comment_token1] = ACTIONS(13),
  },
  [6] = {
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_variable] = STATE(12),
    [sym__definition] = STATE(12),
    [sym_tag] = STATE(12),
    [sym_comment] = STATE(12),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__tag_symbol] = ACTIONS(7),
    [anon_sym_POUND_LPAREN] = ACTIONS(9),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(11),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [8] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(23),
    [sym__tag_symbol] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND_LPAREN] = ACTIONS(23),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(23),
  },
  [9] = {
    [sym_parameter_list] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(27),
  },
  [10] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(29),
    [sym__tag_symbol] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(29),
  },
  [11] = {
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [12] = {
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_variable] = STATE(12),
    [sym__definition] = STATE(12),
    [sym_tag] = STATE(12),
    [sym_comment] = STATE(12),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(35),
    [sym__tag_symbol] = ACTIONS(38),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(46),
  },
  [13] = {
    [sym_string_parameter] = STATE(20),
    [sym__parameters] = STATE(19),
    [aux_sym__parameters_repeat1] = STATE(20),
    [sym_operator] = STATE(20),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(53),
    [aux_sym_operator_token1] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
  },
  [14] = {
    [sym_else_if] = STATE(24),
    [sym_else] = STATE(25),
    [sym_body] = STATE(26),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_elseif] = ACTIONS(59),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_else] = ACTIONS(63),
    [sym__tag_symbol] = ACTIONS(55),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(55),
  },
  [15] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(65),
    [sym__tag_symbol] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_POUND_LPAREN] = ACTIONS(65),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(65),
  },
  [16] = {
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [aux_sym_operator_token1] = ACTIONS(69),
    [anon_sym_in] = ACTIONS(69),
  },
  [17] = {
    [sym_string] = ACTIONS(71),
  },
  [18] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(73),
    [anon_sym_elseif] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_POUND_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [sym__tag_symbol] = ACTIONS(73),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(73),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [20] = {
    [sym_string_parameter] = STATE(29),
    [sym_operator] = STATE(29),
    [aux_sym__parameters_repeat1] = STATE(29),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [aux_sym_operator_token1] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
  },
  [21] = {
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_variable] = STATE(35),
    [sym__definition] = STATE(35),
    [sym_tag] = STATE(35),
    [sym__definitions] = STATE(36),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym__tag_symbol] = ACTIONS(85),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
  },
  [22] = {
    [sym_parameter_list] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(91),
  },
  [23] = {
    [sym_body] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(93),
  },
  [24] = {
    [sym_else] = STATE(41),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(95),
    [sym__tag_symbol] = ACTIONS(95),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(95),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(63),
  },
  [25] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(97),
    [sym__tag_symbol] = ACTIONS(95),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(97),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(97),
  },
  [26] = {
    [sym_else_if] = STATE(42),
    [sym_else] = STATE(41),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(95),
    [sym__tag_symbol] = ACTIONS(95),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(95),
    [anon_sym_elseif] = ACTIONS(59),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(63),
  },
  [27] = {
    [anon_sym_DQUOTE] = ACTIONS(99),
  },
  [28] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(101),
    [anon_sym_elseif] = ACTIONS(103),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_POUND_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_else] = ACTIONS(103),
    [sym__tag_symbol] = ACTIONS(101),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(101),
  },
  [29] = {
    [sym_string_parameter] = STATE(29),
    [sym_operator] = STATE(29),
    [aux_sym__parameters_repeat1] = STATE(29),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [aux_sym_operator_token1] = ACTIONS(105),
    [anon_sym_in] = ACTIONS(105),
  },
  [30] = {
    [aux_sym_comment_token2] = ACTIONS(113),
  },
  [31] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(115),
    [sym__tag_symbol] = ACTIONS(115),
    [anon_sym_elseif] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(117),
  },
  [32] = {
    [sym__tag_components] = STATE(46),
    [sym_identifier] = ACTIONS(119),
  },
  [33] = {
    [sym_identifier] = ACTIONS(121),
  },
  [34] = {
    [aux_sym_comment_token1] = ACTIONS(113),
  },
  [35] = {
    [aux_sym_source_file_repeat1] = STATE(48),
    [sym_variable] = STATE(48),
    [sym__definition] = STATE(48),
    [sym_tag] = STATE(48),
    [sym_comment] = STATE(48),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(123),
    [sym__tag_symbol] = ACTIONS(85),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
  },
  [36] = {
    [anon_sym_RBRACE] = ACTIONS(125),
  },
  [37] = {
    [sym_string_parameter] = STATE(20),
    [sym__parameters] = STATE(51),
    [aux_sym__parameters_repeat1] = STATE(20),
    [sym_operator] = STATE(20),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(127),
    [aux_sym_operator_token1] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
  },
  [38] = {
    [sym_body] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [39] = {
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_variable] = STATE(35),
    [sym__definition] = STATE(35),
    [sym_tag] = STATE(35),
    [sym__definitions] = STATE(55),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym__tag_symbol] = ACTIONS(85),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
  },
  [40] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(133),
    [sym__tag_symbol] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_POUND_LPAREN] = ACTIONS(133),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(133),
  },
  [41] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(137),
    [sym__tag_symbol] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_POUND_LPAREN] = ACTIONS(137),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(137),
  },
  [42] = {
    [sym_else] = STATE(56),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(139),
    [sym__tag_symbol] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_POUND_LPAREN] = ACTIONS(139),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_else] = ACTIONS(63),
  },
  [43] = {
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [aux_sym_operator_token1] = ACTIONS(141),
    [anon_sym_in] = ACTIONS(141),
  },
  [44] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym__tag_symbol] = ACTIONS(25),
    [anon_sym_POUND_LPAREN] = ACTIONS(25),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(25),
  },
  [45] = {
    [sym_parameter_list] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(143),
  },
  [46] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym__tag_symbol] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(31),
  },
  [47] = {
    [anon_sym_RPAREN] = ACTIONS(145),
  },
  [48] = {
    [aux_sym_source_file_repeat1] = STATE(48),
    [sym_variable] = STATE(48),
    [sym__definition] = STATE(48),
    [sym_tag] = STATE(48),
    [sym_comment] = STATE(48),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(41),
    [sym__tag_symbol] = ACTIONS(150),
    [anon_sym_POUND_LPAREN] = ACTIONS(153),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(156),
  },
  [49] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(159),
    [sym__tag_symbol] = ACTIONS(159),
    [anon_sym_elseif] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(161),
  },
  [50] = {
    [anon_sym_LBRACE] = ACTIONS(75),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(163),
  },
  [52] = {
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_variable] = STATE(35),
    [sym__definition] = STATE(35),
    [sym_tag] = STATE(35),
    [sym__definitions] = STATE(62),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym__tag_symbol] = ACTIONS(85),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
  },
  [53] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(167),
    [sym__tag_symbol] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_POUND_LPAREN] = ACTIONS(167),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(167),
    [anon_sym_else] = ACTIONS(169),
  },
  [54] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(117),
    [sym__tag_symbol] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(117),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(117),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(171),
  },
  [56] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(173),
    [sym__tag_symbol] = ACTIONS(175),
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(173),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(173),
  },
  [57] = {
    [sym_string_parameter] = STATE(20),
    [sym__parameters] = STATE(65),
    [aux_sym__parameters_repeat1] = STATE(20),
    [sym_operator] = STATE(20),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(177),
    [aux_sym_operator_token1] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
  },
  [58] = {
    [sym_else_if] = STATE(69),
    [sym_else] = STATE(70),
    [sym_body] = STATE(71),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(55),
    [anon_sym_elseif] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym__tag_symbol] = ACTIONS(55),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(55),
  },
  [59] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym__tag_symbol] = ACTIONS(67),
    [anon_sym_POUND_LPAREN] = ACTIONS(67),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(67),
  },
  [60] = {
    [anon_sym_LBRACE] = ACTIONS(103),
  },
  [61] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(115),
    [sym__tag_symbol] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(115),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(117),
  },
  [62] = {
    [anon_sym_RBRACE] = ACTIONS(185),
  },
  [63] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(161),
    [sym__tag_symbol] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(161),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(161),
  },
  [64] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(73),
    [anon_sym_elseif] = ACTIONS(75),
    [anon_sym_POUND_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym__tag_symbol] = ACTIONS(73),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(73),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(187),
  },
  [66] = {
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_variable] = STATE(35),
    [sym__definition] = STATE(35),
    [sym_tag] = STATE(35),
    [sym__definitions] = STATE(75),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(189),
    [sym__tag_symbol] = ACTIONS(85),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
  },
  [67] = {
    [sym_parameter_list] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(91),
  },
  [68] = {
    [sym_body] = STATE(78),
    [anon_sym_LBRACE] = ACTIONS(191),
  },
  [69] = {
    [sym_else] = STATE(79),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym__tag_symbol] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(95),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(183),
  },
  [70] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym__tag_symbol] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(95),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(95),
  },
  [71] = {
    [sym_else_if] = STATE(80),
    [sym_else] = STATE(79),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym__tag_symbol] = ACTIONS(95),
    [anon_sym_elseif] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(95),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(183),
  },
  [72] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(159),
    [sym__tag_symbol] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(159),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(161),
  },
  [73] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(101),
    [anon_sym_elseif] = ACTIONS(103),
    [anon_sym_POUND_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_else] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [sym__tag_symbol] = ACTIONS(101),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(101),
  },
  [74] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym__tag_symbol] = ACTIONS(115),
    [anon_sym_elseif] = ACTIONS(117),
    [anon_sym_POUND_LPAREN] = ACTIONS(115),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(117),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(193),
  },
  [76] = {
    [sym_body] = STATE(83),
    [anon_sym_LBRACE] = ACTIONS(195),
  },
  [77] = {
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_variable] = STATE(35),
    [sym__definition] = STATE(35),
    [sym_tag] = STATE(35),
    [sym__definitions] = STATE(85),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym__tag_symbol] = ACTIONS(85),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
  },
  [78] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym__tag_symbol] = ACTIONS(135),
    [anon_sym_POUND_LPAREN] = ACTIONS(135),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(135),
  },
  [79] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym__tag_symbol] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(139),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(139),
  },
  [80] = {
    [sym_else] = STATE(86),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym__tag_symbol] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(139),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(139),
    [anon_sym_else] = ACTIONS(183),
  },
  [81] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(161),
    [sym__tag_symbol] = ACTIONS(159),
    [anon_sym_elseif] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(159),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(161),
  },
  [82] = {
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_variable] = STATE(35),
    [sym__definition] = STATE(35),
    [sym_tag] = STATE(35),
    [sym__definitions] = STATE(88),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(199),
    [sym__tag_symbol] = ACTIONS(85),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
  },
  [83] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(169),
    [sym__tag_symbol] = ACTIONS(167),
    [anon_sym_POUND_LPAREN] = ACTIONS(167),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(167),
    [anon_sym_else] = ACTIONS(169),
  },
  [84] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym__tag_symbol] = ACTIONS(115),
    [anon_sym_POUND_LPAREN] = ACTIONS(115),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(115),
  },
  [85] = {
    [anon_sym_RBRACE] = ACTIONS(201),
  },
  [86] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(173),
    [sym__tag_symbol] = ACTIONS(175),
    [anon_sym_POUND_LPAREN] = ACTIONS(175),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(175),
  },
  [87] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym__tag_symbol] = ACTIONS(115),
    [anon_sym_POUND_LPAREN] = ACTIONS(115),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(117),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(203),
  },
  [89] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(161),
    [sym__tag_symbol] = ACTIONS(159),
    [anon_sym_POUND_LPAREN] = ACTIONS(159),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(159),
  },
  [90] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(161),
    [sym__tag_symbol] = ACTIONS(159),
    [anon_sym_POUND_LPAREN] = ACTIONS(159),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(161),
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
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [21] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.count = 1, .reusable = true}, SHIFT(16),
  [51] = {.count = 1, .reusable = true}, SHIFT(17),
  [53] = {.count = 1, .reusable = true}, SHIFT(18),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym__tag_components, 2, .alias_sequence_id = 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym__tag_components, 2, .alias_sequence_id = 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(22),
  [61] = {.count = 1, .reusable = true}, SHIFT(21),
  [63] = {.count = 1, .reusable = true}, SHIFT(23),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 3),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 3),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(27),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(28),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym__parameters, 1),
  [81] = {.count = 1, .reusable = false}, SHIFT(30),
  [83] = {.count = 1, .reusable = true}, SHIFT(31),
  [85] = {.count = 1, .reusable = false}, SHIFT(32),
  [87] = {.count = 1, .reusable = false}, SHIFT(33),
  [89] = {.count = 1, .reusable = false}, SHIFT(34),
  [91] = {.count = 1, .reusable = true}, SHIFT(37),
  [93] = {.count = 1, .reusable = true}, SHIFT(39),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym__tag_components, 3, .alias_sequence_id = 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__tag_components, 3, .alias_sequence_id = 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(43),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(16),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym__parameters_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(17),
  [113] = {.count = 1, .reusable = true}, SHIFT(44),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(45),
  [121] = {.count = 1, .reusable = true}, SHIFT(47),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__definitions, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(49),
  [127] = {.count = 1, .reusable = true}, SHIFT(50),
  [129] = {.count = 1, .reusable = true}, SHIFT(52),
  [131] = {.count = 1, .reusable = true}, SHIFT(54),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_else, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_else, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__tag_components, 4, .alias_sequence_id = 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__tag_components, 4, .alias_sequence_id = 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [143] = {.count = 1, .reusable = true}, SHIFT(57),
  [145] = {.count = 1, .reusable = true}, SHIFT(59),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [163] = {.count = 1, .reusable = true}, SHIFT(60),
  [165] = {.count = 1, .reusable = true}, SHIFT(61),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_else_if, 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_else_if, 3),
  [171] = {.count = 1, .reusable = true}, SHIFT(63),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__tag_components, 5, .alias_sequence_id = 1),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__tag_components, 5, .alias_sequence_id = 1),
  [177] = {.count = 1, .reusable = true}, SHIFT(64),
  [179] = {.count = 1, .reusable = true}, SHIFT(67),
  [181] = {.count = 1, .reusable = true}, SHIFT(66),
  [183] = {.count = 1, .reusable = true}, SHIFT(68),
  [185] = {.count = 1, .reusable = true}, SHIFT(72),
  [187] = {.count = 1, .reusable = true}, SHIFT(73),
  [189] = {.count = 1, .reusable = true}, SHIFT(74),
  [191] = {.count = 1, .reusable = true}, SHIFT(77),
  [193] = {.count = 1, .reusable = true}, SHIFT(81),
  [195] = {.count = 1, .reusable = true}, SHIFT(82),
  [197] = {.count = 1, .reusable = true}, SHIFT(84),
  [199] = {.count = 1, .reusable = true}, SHIFT(87),
  [201] = {.count = 1, .reusable = true}, SHIFT(89),
  [203] = {.count = 1, .reusable = true}, SHIFT(90),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
