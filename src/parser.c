#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_connection_COLON = 1,
  aux_sym_connection_property_token1 = 2,
  anon_sym_include_COLON = 3,
  anon_sym_explore_COLON = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_join_COLON = 7,
  anon_sym_sql_on_COLON = 8,
  anon_sym_SEMI_SEMI = 9,
  anon_sym_view_COLON = 10,
  anon_sym_dimension_COLON = 11,
  anon_sym_primary_key_COLON = 12,
  anon_sym_type_COLON = 13,
  anon_sym_sql_COLON = 14,
  anon_sym_value_format_COLON = 15,
  sym_comment = 16,
  sym_identifier = 17,
  sym_string = 18,
  sym_expression = 19,
  sym_source_file = 20,
  sym_connection_property = 21,
  sym_include_property = 22,
  sym_explore = 23,
  sym_join = 24,
  sym_sql_on = 25,
  sym_view = 26,
  sym_dimension = 27,
  sym_primary_key = 28,
  sym_type = 29,
  sym_sql = 30,
  sym_value_format = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_explore_repeat1 = 33,
  aux_sym_view_repeat1 = 34,
  aux_sym_dimension_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_connection_COLON] = "connection:",
  [aux_sym_connection_property_token1] = "connection_property_token1",
  [anon_sym_include_COLON] = "include:",
  [anon_sym_explore_COLON] = "explore:",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_join_COLON] = "join:",
  [anon_sym_sql_on_COLON] = "sql_on:",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_view_COLON] = "view:",
  [anon_sym_dimension_COLON] = "dimension:",
  [anon_sym_primary_key_COLON] = "primary_key:",
  [anon_sym_type_COLON] = "type:",
  [anon_sym_sql_COLON] = "sql:",
  [anon_sym_value_format_COLON] = "value_format:",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_expression] = "expression",
  [sym_source_file] = "source_file",
  [sym_connection_property] = "connection_property",
  [sym_include_property] = "include_property",
  [sym_explore] = "explore",
  [sym_join] = "join",
  [sym_sql_on] = "sql_on",
  [sym_view] = "view",
  [sym_dimension] = "dimension",
  [sym_primary_key] = "primary_key",
  [sym_type] = "type",
  [sym_sql] = "sql",
  [sym_value_format] = "value_format",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_explore_repeat1] = "explore_repeat1",
  [aux_sym_view_repeat1] = "view_repeat1",
  [aux_sym_dimension_repeat1] = "dimension_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_connection_COLON] = anon_sym_connection_COLON,
  [aux_sym_connection_property_token1] = aux_sym_connection_property_token1,
  [anon_sym_include_COLON] = anon_sym_include_COLON,
  [anon_sym_explore_COLON] = anon_sym_explore_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_join_COLON] = anon_sym_join_COLON,
  [anon_sym_sql_on_COLON] = anon_sym_sql_on_COLON,
  [anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
  [anon_sym_view_COLON] = anon_sym_view_COLON,
  [anon_sym_dimension_COLON] = anon_sym_dimension_COLON,
  [anon_sym_primary_key_COLON] = anon_sym_primary_key_COLON,
  [anon_sym_type_COLON] = anon_sym_type_COLON,
  [anon_sym_sql_COLON] = anon_sym_sql_COLON,
  [anon_sym_value_format_COLON] = anon_sym_value_format_COLON,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_expression] = sym_expression,
  [sym_source_file] = sym_source_file,
  [sym_connection_property] = sym_connection_property,
  [sym_include_property] = sym_include_property,
  [sym_explore] = sym_explore,
  [sym_join] = sym_join,
  [sym_sql_on] = sym_sql_on,
  [sym_view] = sym_view,
  [sym_dimension] = sym_dimension,
  [sym_primary_key] = sym_primary_key,
  [sym_type] = sym_type,
  [sym_sql] = sym_sql,
  [sym_value_format] = sym_value_format,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_explore_repeat1] = aux_sym_explore_repeat1,
  [aux_sym_view_repeat1] = aux_sym_view_repeat1,
  [aux_sym_dimension_repeat1] = aux_sym_dimension_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_connection_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_connection_property_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_explore_COLON] = {
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
  [anon_sym_join_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_on_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_view_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dimension_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primary_key_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value_format_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_connection_property] = {
    .visible = true,
    .named = true,
  },
  [sym_include_property] = {
    .visible = true,
    .named = true,
  },
  [sym_explore] = {
    .visible = true,
    .named = true,
  },
  [sym_join] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_on] = {
    .visible = true,
    .named = true,
  },
  [sym_view] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_key] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sql] = {
    .visible = true,
    .named = true,
  },
  [sym_value_format] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_explore_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_view_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dimension_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'j') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(88);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(89);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 'q') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'j') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '}') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_connection_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_connection_property_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_connection_property_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(173);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_include_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_explore_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_join_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_sql_on_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_view_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_dimension_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_primary_key_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_type_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_sql_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_value_format_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(173);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 78},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 78},
  [5] = {.lex_state = 78},
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 78},
  [10] = {.lex_state = 78},
  [11] = {.lex_state = 78},
  [12] = {.lex_state = 78},
  [13] = {.lex_state = 78},
  [14] = {.lex_state = 78},
  [15] = {.lex_state = 78},
  [16] = {.lex_state = 78},
  [17] = {.lex_state = 78},
  [18] = {.lex_state = 78},
  [19] = {.lex_state = 78},
  [20] = {.lex_state = 78},
  [21] = {.lex_state = 78},
  [22] = {.lex_state = 78},
  [23] = {.lex_state = 78},
  [24] = {.lex_state = 78},
  [25] = {.lex_state = 78},
  [26] = {.lex_state = 78},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_connection_COLON] = ACTIONS(1),
    [aux_sym_connection_property_token1] = ACTIONS(3),
    [anon_sym_include_COLON] = ACTIONS(1),
    [anon_sym_explore_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_join_COLON] = ACTIONS(1),
    [anon_sym_sql_on_COLON] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(1),
    [anon_sym_view_COLON] = ACTIONS(1),
    [anon_sym_dimension_COLON] = ACTIONS(1),
    [anon_sym_primary_key_COLON] = ACTIONS(1),
    [anon_sym_type_COLON] = ACTIONS(1),
    [anon_sym_sql_COLON] = ACTIONS(1),
    [anon_sym_value_format_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym_connection_property] = STATE(3),
    [sym_include_property] = STATE(3),
    [sym_explore] = STATE(3),
    [sym_view] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_connection_COLON] = ACTIONS(7),
    [aux_sym_connection_property_token1] = ACTIONS(3),
    [anon_sym_include_COLON] = ACTIONS(9),
    [anon_sym_explore_COLON] = ACTIONS(11),
    [anon_sym_view_COLON] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_primary_key_COLON,
    ACTIONS(20), 1,
      anon_sym_type_COLON,
    ACTIONS(23), 1,
      anon_sym_sql_COLON,
    ACTIONS(26), 1,
      anon_sym_value_format_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(2), 5,
      sym_primary_key,
      sym_type,
      sym_sql,
      sym_value_format,
      aux_sym_dimension_repeat1,
  [27] = 7,
    ACTIONS(7), 1,
      anon_sym_connection_COLON,
    ACTIONS(9), 1,
      anon_sym_include_COLON,
    ACTIONS(11), 1,
      anon_sym_explore_COLON,
    ACTIONS(13), 1,
      anon_sym_view_COLON,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(6), 5,
      sym_connection_property,
      sym_include_property,
      sym_explore,
      sym_view,
      aux_sym_source_file_repeat1,
  [54] = 7,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_primary_key_COLON,
    ACTIONS(35), 1,
      anon_sym_type_COLON,
    ACTIONS(37), 1,
      anon_sym_sql_COLON,
    ACTIONS(39), 1,
      anon_sym_value_format_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(2), 5,
      sym_primary_key,
      sym_type,
      sym_sql,
      sym_value_format,
      aux_sym_dimension_repeat1,
  [81] = 7,
    ACTIONS(33), 1,
      anon_sym_primary_key_COLON,
    ACTIONS(35), 1,
      anon_sym_type_COLON,
    ACTIONS(37), 1,
      anon_sym_sql_COLON,
    ACTIONS(39), 1,
      anon_sym_value_format_COLON,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(4), 5,
      sym_primary_key,
      sym_type,
      sym_sql,
      sym_value_format,
      aux_sym_dimension_repeat1,
  [108] = 7,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_connection_COLON,
    ACTIONS(48), 1,
      anon_sym_include_COLON,
    ACTIONS(51), 1,
      anon_sym_explore_COLON,
    ACTIONS(54), 1,
      anon_sym_view_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(6), 5,
      sym_connection_property,
      sym_include_property,
      sym_explore,
      sym_view,
      aux_sym_source_file_repeat1,
  [135] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(57), 5,
      anon_sym_RBRACE,
      anon_sym_primary_key_COLON,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
  [147] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_RBRACE,
      anon_sym_primary_key_COLON,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
  [159] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(61), 5,
      anon_sym_RBRACE,
      anon_sym_primary_key_COLON,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
  [171] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(63), 5,
      anon_sym_RBRACE,
      anon_sym_primary_key_COLON,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
  [183] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [195] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [207] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [219] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [231] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [243] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [255] = 4,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_join_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(17), 2,
      sym_join,
      aux_sym_explore_repeat1,
  [270] = 4,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_dimension_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(22), 2,
      sym_dimension,
      aux_sym_view_repeat1,
  [285] = 4,
    ACTIONS(84), 1,
      anon_sym_dimension_COLON,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(18), 2,
      sym_dimension,
      aux_sym_view_repeat1,
  [300] = 4,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      anon_sym_join_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(21), 2,
      sym_join,
      aux_sym_explore_repeat1,
  [315] = 4,
    ACTIONS(90), 1,
      anon_sym_join_COLON,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(17), 2,
      sym_join,
      aux_sym_explore_repeat1,
  [330] = 4,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_dimension_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(22), 2,
      sym_dimension,
      aux_sym_view_repeat1,
  [345] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_RBRACE,
      anon_sym_join_COLON,
  [354] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
  [363] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
  [372] = 3,
    ACTIONS(105), 1,
      anon_sym_sql_on_COLON,
    STATE(31), 1,
      sym_sql_on,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [383] = 2,
    ACTIONS(107), 1,
      sym_string,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [391] = 2,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [399] = 2,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [407] = 2,
    ACTIONS(115), 1,
      sym_expression,
    ACTIONS(113), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [415] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [423] = 2,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [431] = 2,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [439] = 2,
    ACTIONS(123), 1,
      sym_expression,
    ACTIONS(113), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [447] = 2,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [455] = 2,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [463] = 2,
    ACTIONS(129), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [471] = 2,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [479] = 2,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [487] = 2,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [495] = 2,
    ACTIONS(137), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [503] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [511] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [519] = 2,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [527] = 2,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [535] = 2,
    ACTIONS(147), 1,
      sym_string,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_connection_property_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 243,
  [SMALL_STATE(17)] = 255,
  [SMALL_STATE(18)] = 270,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 315,
  [SMALL_STATE(22)] = 330,
  [SMALL_STATE(23)] = 345,
  [SMALL_STATE(24)] = 354,
  [SMALL_STATE(25)] = 363,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 383,
  [SMALL_STATE(28)] = 391,
  [SMALL_STATE(29)] = 399,
  [SMALL_STATE(30)] = 407,
  [SMALL_STATE(31)] = 415,
  [SMALL_STATE(32)] = 423,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 439,
  [SMALL_STATE(35)] = 447,
  [SMALL_STATE(36)] = 455,
  [SMALL_STATE(37)] = 463,
  [SMALL_STATE(38)] = 471,
  [SMALL_STATE(39)] = 479,
  [SMALL_STATE(40)] = 487,
  [SMALL_STATE(41)] = 495,
  [SMALL_STATE(42)] = 503,
  [SMALL_STATE(43)] = 511,
  [SMALL_STATE(44)] = 519,
  [SMALL_STATE(45)] = 527,
  [SMALL_STATE(46)] = 535,
  [SMALL_STATE(47)] = 543,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(32),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(33),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(34),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_format, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_property, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_property, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explore, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explore, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explore_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explore_repeat1, 2), SHIFT_REPEAT(38),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_view_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_repeat1, 2), SHIFT_REPEAT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_on, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lookml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
