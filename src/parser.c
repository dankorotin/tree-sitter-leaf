#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 80
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  anon_sym_in = 11,
  aux_sym_operator_token1 = 12,
  anon_sym_DOT = 13,
  anon_sym_LPAREN = 14,
  sym_else = 15,
  aux_sym_body_token1 = 16,
  aux_sym_body_token2 = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_tag = 20,
  sym_tag_components = 21,
  sym_variable = 22,
  sym_comment = 23,
  sym_string_parameter = 24,
  sym_operator = 25,
  sym_parameter_list = 26,
  sym__parameters = 27,
  sym_body = 28,
  sym__definitions = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym__parameters_repeat1 = 31,
  anon_alias_sym_name = 32,
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
  [anon_sym_in] = "in",
  [aux_sym_operator_token1] = "operator_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [sym_else] = "else",
  [aux_sym_body_token1] = "body_token1",
  [aux_sym_body_token2] = "body_token2",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_tag] = "tag",
  [sym_tag_components] = "tag_components",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [sym_string_parameter] = "string_parameter",
  [sym_operator] = "operator",
  [sym_parameter_list] = "parameter_list",
  [sym__parameters] = "_parameters",
  [sym_body] = "body",
  [sym__definitions] = "_definitions",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [anon_alias_sym_name] = "name",
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
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_token2] = {
    .visible = false,
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
  [sym_tag_components] = {
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
  [anon_alias_sym_name] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_name,
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0)
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_tag_symbol);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 'l')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0)
        SKIP(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_body_token2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0)
        SKIP(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_tag_symbol);
      if (lookahead == '#')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 9:
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      END_STATE();
    case 10:
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0)
        SKIP(6);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0)
        SKIP(6);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 'l')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead != 0)
        SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '(')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(')
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ')')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')')
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '|')
        ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead != 0)
        SKIP(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead == '{')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead != 0)
        SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '#')
        ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '"')
        SKIP(37);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"')
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '}')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(40);
      if (lookahead != 0)
        SKIP(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_body_token2);
      if (lookahead == '}')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '"')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"')
        ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0)
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == 'l')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0)
        SKIP(46);
      END_STATE();
    case 46:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0)
        SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == 's')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0)
        SKIP(46);
      END_STATE();
    case 48:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0)
        SKIP(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == 'l')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '}')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(51);
      if (lookahead != 0)
        SKIP(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '}')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_body_token2);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '}')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'l')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 's')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'l')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(61);
      if (lookahead != 0)
        SKIP(61);
      END_STATE();
    case 62:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(61);
      if (lookahead != 0)
        SKIP(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_body_token2);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == 's')
        ADVANCE(65);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(61);
      if (lookahead != 0)
        SKIP(61);
      END_STATE();
    case 65:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(61);
      if (lookahead != 0)
        SKIP(61);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '#')
        SKIP(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 44},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 51},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 68},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 68},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 68},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(1),
    [sym_else] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [aux_sym_body_token2] = ACTIONS(1),
    [aux_sym_body_token1] = ACTIONS(1),
    [sym_tag_symbol] = ACTIONS(1),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_variable] = STATE(6),
    [sym_tag] = STATE(6),
    [sym__definition] = STATE(6),
    [sym_source_file] = STATE(7),
    [sym_comment] = STATE(6),
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
    [sym_tag_components] = STATE(10),
    [sym_identifier] = ACTIONS(15),
  },
  [4] = {
    [sym_identifier] = ACTIONS(17),
  },
  [5] = {
    [aux_sym_comment_token1] = ACTIONS(13),
  },
  [6] = {
    [sym_variable] = STATE(12),
    [sym__definition] = STATE(12),
    [sym_tag] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_comment] = STATE(12),
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
    [sym_parameter_list] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(27),
  },
  [10] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(29),
    [sym_tag_symbol] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(29),
  },
  [11] = {
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [12] = {
    [sym_variable] = STATE(12),
    [sym__definition] = STATE(12),
    [sym_tag] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_comment] = STATE(12),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(35),
    [sym_tag_symbol] = ACTIONS(38),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(46),
  },
  [13] = {
    [sym_string_parameter] = STATE(20),
    [sym__parameters] = STATE(19),
    [sym_operator] = STATE(20),
    [aux_sym__parameters_repeat1] = STATE(20),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(53),
    [aux_sym_operator_token1] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
  },
  [14] = {
    [sym_body] = STATE(22),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(55),
    [sym_tag_symbol] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(55),
    [aux_sym_body_token1] = ACTIONS(59),
  },
  [15] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(61),
    [sym_tag_symbol] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_POUND_LPAREN] = ACTIONS(61),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(61),
  },
  [16] = {
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [aux_sym_operator_token1] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(65),
  },
  [17] = {
    [sym_string] = ACTIONS(67),
  },
  [18] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(69),
    [sym_tag_symbol] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_POUND_LPAREN] = ACTIONS(69),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(69),
    [aux_sym_body_token1] = ACTIONS(71),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [20] = {
    [sym_string_parameter] = STATE(25),
    [sym_operator] = STATE(25),
    [aux_sym__parameters_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [aux_sym_operator_token1] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
  },
  [21] = {
    [sym__definitions] = STATE(31),
    [sym_variable] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [sym_tag] = STATE(32),
    [sym__definition] = STATE(32),
    [sym_comment] = STATE(32),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [sym_tag_symbol] = ACTIONS(79),
    [anon_sym_POUND_LPAREN] = ACTIONS(81),
    [aux_sym_body_token2] = ACTIONS(83),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(85),
  },
  [22] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(87),
    [sym_tag_symbol] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_POUND_LPAREN] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(87),
  },
  [23] = {
    [anon_sym_DQUOTE] = ACTIONS(91),
  },
  [24] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(93),
    [sym_tag_symbol] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_POUND_LPAREN] = ACTIONS(93),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(93),
    [aux_sym_body_token1] = ACTIONS(95),
  },
  [25] = {
    [sym_string_parameter] = STATE(25),
    [sym_operator] = STATE(25),
    [aux_sym__parameters_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [aux_sym_operator_token1] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(97),
  },
  [26] = {
    [aux_sym_comment_token2] = ACTIONS(105),
  },
  [27] = {
    [sym_tag_components] = STATE(36),
    [sym_identifier] = ACTIONS(107),
  },
  [28] = {
    [sym_identifier] = ACTIONS(109),
  },
  [29] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(111),
    [sym_tag_symbol] = ACTIONS(111),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_POUND_LPAREN] = ACTIONS(111),
    [sym_else] = ACTIONS(115),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(111),
  },
  [30] = {
    [aux_sym_comment_token1] = ACTIONS(105),
  },
  [31] = {
    [aux_sym_body_token2] = ACTIONS(117),
  },
  [32] = {
    [sym_variable] = STATE(40),
    [sym__definition] = STATE(40),
    [sym_tag] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [sym_comment] = STATE(40),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [sym_tag_symbol] = ACTIONS(79),
    [aux_sym_body_token2] = ACTIONS(119),
    [anon_sym_POUND_LPAREN] = ACTIONS(81),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(85),
  },
  [33] = {
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [aux_sym_operator_token1] = ACTIONS(121),
    [anon_sym_in] = ACTIONS(121),
  },
  [34] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(25),
    [sym_tag_symbol] = ACTIONS(25),
    [anon_sym_POUND_LPAREN] = ACTIONS(25),
    [aux_sym_body_token2] = ACTIONS(23),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(25),
  },
  [35] = {
    [sym_parameter_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(123),
  },
  [36] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(31),
    [sym_tag_symbol] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [aux_sym_body_token2] = ACTIONS(29),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(31),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(125),
  },
  [38] = {
    [sym_body] = STATE(45),
    [aux_sym_body_token1] = ACTIONS(127),
  },
  [39] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(129),
    [sym_tag_symbol] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(129),
    [sym_else] = ACTIONS(133),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(129),
  },
  [40] = {
    [sym_variable] = STATE(40),
    [sym__definition] = STATE(40),
    [sym_tag] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [sym_comment] = STATE(40),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(135),
    [sym_tag_symbol] = ACTIONS(138),
    [anon_sym_POUND_LPAREN] = ACTIONS(141),
    [aux_sym_body_token2] = ACTIONS(41),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(144),
  },
  [41] = {
    [sym_string_parameter] = STATE(20),
    [sym__parameters] = STATE(48),
    [sym_operator] = STATE(20),
    [aux_sym__parameters_repeat1] = STATE(20),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(147),
    [aux_sym_operator_token1] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
  },
  [42] = {
    [sym_body] = STATE(50),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(55),
    [sym_tag_symbol] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(55),
    [aux_sym_body_token2] = ACTIONS(57),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(55),
    [aux_sym_body_token1] = ACTIONS(149),
  },
  [43] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(63),
    [sym_tag_symbol] = ACTIONS(63),
    [anon_sym_POUND_LPAREN] = ACTIONS(63),
    [aux_sym_body_token2] = ACTIONS(61),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(63),
  },
  [44] = {
    [sym__definitions] = STATE(52),
    [sym_variable] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [sym_tag] = STATE(32),
    [sym__definition] = STATE(32),
    [sym_comment] = STATE(32),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [sym_tag_symbol] = ACTIONS(79),
    [anon_sym_POUND_LPAREN] = ACTIONS(81),
    [aux_sym_body_token2] = ACTIONS(151),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(85),
  },
  [45] = {
    [sym_tag_components] = STATE(53),
    [sym_identifier] = ACTIONS(15),
  },
  [46] = {
    [sym_body] = STATE(54),
    [aux_sym_body_token1] = ACTIONS(127),
  },
  [47] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(69),
    [sym_tag_symbol] = ACTIONS(69),
    [anon_sym_POUND_LPAREN] = ACTIONS(69),
    [aux_sym_body_token2] = ACTIONS(71),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(69),
    [aux_sym_body_token1] = ACTIONS(71),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(153),
  },
  [49] = {
    [sym__definitions] = STATE(57),
    [sym_variable] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [sym_tag] = STATE(32),
    [sym__definition] = STATE(32),
    [sym_comment] = STATE(32),
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(77),
    [sym_tag_symbol] = ACTIONS(79),
    [anon_sym_POUND_LPAREN] = ACTIONS(81),
    [aux_sym_body_token2] = ACTIONS(155),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(85),
  },
  [50] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(89),
    [sym_tag_symbol] = ACTIONS(89),
    [anon_sym_POUND_LPAREN] = ACTIONS(89),
    [aux_sym_body_token2] = ACTIONS(87),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(89),
  },
  [51] = {
    [sym_else] = ACTIONS(157),
    [sym_identifier] = ACTIONS(113),
  },
  [52] = {
    [aux_sym_body_token2] = ACTIONS(159),
  },
  [53] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(161),
    [sym_tag_symbol] = ACTIONS(163),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(161),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(161),
  },
  [54] = {
    [sym_tag_components] = STATE(60),
    [sym_identifier] = ACTIONS(15),
  },
  [55] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(93),
    [sym_tag_symbol] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(93),
    [aux_sym_body_token2] = ACTIONS(95),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(93),
    [aux_sym_body_token1] = ACTIONS(95),
  },
  [56] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(111),
    [sym_tag_symbol] = ACTIONS(111),
    [sym_else] = ACTIONS(165),
    [anon_sym_POUND_LPAREN] = ACTIONS(111),
    [aux_sym_body_token2] = ACTIONS(113),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(111),
  },
  [57] = {
    [aux_sym_body_token2] = ACTIONS(167),
  },
  [58] = {
    [sym_body] = STATE(63),
    [aux_sym_body_token1] = ACTIONS(127),
  },
  [59] = {
    [sym_else] = ACTIONS(169),
    [sym_identifier] = ACTIONS(131),
  },
  [60] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(171),
    [sym_tag_symbol] = ACTIONS(173),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(171),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(171),
  },
  [61] = {
    [sym_body] = STATE(65),
    [aux_sym_body_token1] = ACTIONS(127),
  },
  [62] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(129),
    [sym_tag_symbol] = ACTIONS(129),
    [sym_else] = ACTIONS(175),
    [anon_sym_POUND_LPAREN] = ACTIONS(129),
    [aux_sym_body_token2] = ACTIONS(131),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(129),
  },
  [63] = {
    [sym_tag_components] = STATE(68),
    [sym_identifier] = ACTIONS(177),
  },
  [64] = {
    [sym_body] = STATE(69),
    [aux_sym_body_token1] = ACTIONS(127),
  },
  [65] = {
    [sym_tag_components] = STATE(70),
    [sym_identifier] = ACTIONS(107),
  },
  [66] = {
    [sym_body] = STATE(71),
    [aux_sym_body_token1] = ACTIONS(127),
  },
  [67] = {
    [sym_parameter_list] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(179),
  },
  [68] = {
    [sym_identifier] = ACTIONS(161),
  },
  [69] = {
    [sym_tag_components] = STATE(74),
    [sym_identifier] = ACTIONS(177),
  },
  [70] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(163),
    [sym_tag_symbol] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(163),
    [aux_sym_body_token2] = ACTIONS(161),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(163),
  },
  [71] = {
    [sym_tag_components] = STATE(75),
    [sym_identifier] = ACTIONS(107),
  },
  [72] = {
    [sym_string_parameter] = STATE(20),
    [sym__parameters] = STATE(77),
    [sym_operator] = STATE(20),
    [aux_sym__parameters_repeat1] = STATE(20),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(181),
    [aux_sym_operator_token1] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
  },
  [73] = {
    [sym_body] = STATE(78),
    [aux_sym_body_token1] = ACTIONS(127),
    [sym_identifier] = ACTIONS(57),
  },
  [74] = {
    [sym_identifier] = ACTIONS(171),
  },
  [75] = {
    [anon_sym_POUND_SLASH_STAR] = ACTIONS(173),
    [sym_tag_symbol] = ACTIONS(173),
    [anon_sym_POUND_LPAREN] = ACTIONS(173),
    [aux_sym_body_token2] = ACTIONS(171),
    [anon_sym_POUND_SLASH_SLASH] = ACTIONS(173),
  },
  [76] = {
    [aux_sym_body_token1] = ACTIONS(71),
    [sym_identifier] = ACTIONS(71),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(183),
  },
  [78] = {
    [sym_identifier] = ACTIONS(87),
  },
  [79] = {
    [aux_sym_body_token1] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
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
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_tag_components, 2, .alias_sequence_id = 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_tag_components, 2, .alias_sequence_id = 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(21),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 3),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 3),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(23),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(24),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__parameters, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(26),
  [79] = {.count = 1, .reusable = false}, SHIFT(27),
  [81] = {.count = 1, .reusable = false}, SHIFT(28),
  [83] = {.count = 1, .reusable = true}, SHIFT(29),
  [85] = {.count = 1, .reusable = false}, SHIFT(30),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_tag_components, 3, .alias_sequence_id = 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_tag_components, 3, .alias_sequence_id = 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(33),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(16),
  [100] = {.count = 1, .reusable = true}, REDUCE(aux_sym__parameters_repeat1, 2),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(17),
  [105] = {.count = 1, .reusable = true}, SHIFT(34),
  [107] = {.count = 1, .reusable = true}, SHIFT(35),
  [109] = {.count = 1, .reusable = true}, SHIFT(37),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [115] = {.count = 1, .reusable = true}, SHIFT(38),
  [117] = {.count = 1, .reusable = true}, SHIFT(39),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__definitions, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_string_parameter, 3),
  [123] = {.count = 1, .reusable = true}, SHIFT(41),
  [125] = {.count = 1, .reusable = true}, SHIFT(43),
  [127] = {.count = 1, .reusable = true}, SHIFT(44),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [133] = {.count = 1, .reusable = true}, SHIFT(46),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [147] = {.count = 1, .reusable = true}, SHIFT(47),
  [149] = {.count = 1, .reusable = true}, SHIFT(49),
  [151] = {.count = 1, .reusable = true}, SHIFT(51),
  [153] = {.count = 1, .reusable = true}, SHIFT(55),
  [155] = {.count = 1, .reusable = true}, SHIFT(56),
  [157] = {.count = 1, .reusable = false}, SHIFT(58),
  [159] = {.count = 1, .reusable = true}, SHIFT(59),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_body, 5),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_body, 5),
  [165] = {.count = 1, .reusable = true}, SHIFT(61),
  [167] = {.count = 1, .reusable = true}, SHIFT(62),
  [169] = {.count = 1, .reusable = false}, SHIFT(64),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_body, 6),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_body, 6),
  [175] = {.count = 1, .reusable = true}, SHIFT(66),
  [177] = {.count = 1, .reusable = true}, SHIFT(67),
  [179] = {.count = 1, .reusable = true}, SHIFT(72),
  [181] = {.count = 1, .reusable = true}, SHIFT(76),
  [183] = {.count = 1, .reusable = true}, SHIFT(79),
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
