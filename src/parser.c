#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_dimension_group_COLON = 12,
  anon_sym_measure_COLON = 13,
  anon_sym_set_COLON = 14,
  anon_sym_primary_key_COLON = 15,
  anon_sym_type_COLON = 16,
  anon_sym_sql_COLON = 17,
  anon_sym_value_format_COLON = 18,
  anon_sym_drill_fields_COLON = 19,
  anon_sym_LBRACK = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACK = 22,
  anon_sym_fields_COLON = 23,
  anon_sym_timeframes_COLON = 24,
  sym_comment = 25,
  anon_sym_DOT = 26,
  sym_expression = 27,
  sym_identifier = 28,
  anon_sym_STAR = 29,
  sym_string = 30,
  sym_source_file = 31,
  sym_connection_property = 32,
  sym_include_property = 33,
  sym_explore = 34,
  sym_join = 35,
  sym_sql_on = 36,
  sym_view = 37,
  sym_dimension = 38,
  sym_dimension_group = 39,
  sym_measure = 40,
  sym_set = 41,
  sym_primary_key = 42,
  sym_type = 43,
  sym_sql = 44,
  sym_value_format = 45,
  sym_drill_fields = 46,
  sym_fields = 47,
  sym_timeframes = 48,
  sym_dot_walked_identifier = 49,
  sym_field_identifier = 50,
  sym_identifier_with_asterisk = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_explore_repeat1 = 53,
  aux_sym_view_repeat1 = 54,
  aux_sym_dimension_repeat1 = 55,
  aux_sym_dimension_group_repeat1 = 56,
  aux_sym_measure_repeat1 = 57,
  aux_sym_drill_fields_repeat1 = 58,
  aux_sym_fields_repeat1 = 59,
  aux_sym_timeframes_repeat1 = 60,
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
  [anon_sym_dimension_group_COLON] = "dimension_group:",
  [anon_sym_measure_COLON] = "measure:",
  [anon_sym_set_COLON] = "set:",
  [anon_sym_primary_key_COLON] = "primary_key:",
  [anon_sym_type_COLON] = "type:",
  [anon_sym_sql_COLON] = "sql:",
  [anon_sym_value_format_COLON] = "value_format:",
  [anon_sym_drill_fields_COLON] = "drill_fields:",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_fields_COLON] = "fields:",
  [anon_sym_timeframes_COLON] = "timeframes:",
  [sym_comment] = "comment",
  [anon_sym_DOT] = ".",
  [sym_expression] = "expression",
  [sym_identifier] = "identifier",
  [anon_sym_STAR] = "*",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_connection_property] = "connection_property",
  [sym_include_property] = "include_property",
  [sym_explore] = "explore",
  [sym_join] = "join",
  [sym_sql_on] = "sql_on",
  [sym_view] = "view",
  [sym_dimension] = "dimension",
  [sym_dimension_group] = "dimension_group",
  [sym_measure] = "measure",
  [sym_set] = "set",
  [sym_primary_key] = "primary_key",
  [sym_type] = "type",
  [sym_sql] = "sql",
  [sym_value_format] = "value_format",
  [sym_drill_fields] = "drill_fields",
  [sym_fields] = "fields",
  [sym_timeframes] = "timeframes",
  [sym_dot_walked_identifier] = "dot_walked_identifier",
  [sym_field_identifier] = "field_identifier",
  [sym_identifier_with_asterisk] = "identifier_with_asterisk",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_explore_repeat1] = "explore_repeat1",
  [aux_sym_view_repeat1] = "view_repeat1",
  [aux_sym_dimension_repeat1] = "dimension_repeat1",
  [aux_sym_dimension_group_repeat1] = "dimension_group_repeat1",
  [aux_sym_measure_repeat1] = "measure_repeat1",
  [aux_sym_drill_fields_repeat1] = "drill_fields_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_timeframes_repeat1] = "timeframes_repeat1",
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
  [anon_sym_dimension_group_COLON] = anon_sym_dimension_group_COLON,
  [anon_sym_measure_COLON] = anon_sym_measure_COLON,
  [anon_sym_set_COLON] = anon_sym_set_COLON,
  [anon_sym_primary_key_COLON] = anon_sym_primary_key_COLON,
  [anon_sym_type_COLON] = anon_sym_type_COLON,
  [anon_sym_sql_COLON] = anon_sym_sql_COLON,
  [anon_sym_value_format_COLON] = anon_sym_value_format_COLON,
  [anon_sym_drill_fields_COLON] = anon_sym_drill_fields_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_fields_COLON] = anon_sym_fields_COLON,
  [anon_sym_timeframes_COLON] = anon_sym_timeframes_COLON,
  [sym_comment] = sym_comment,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_expression] = sym_expression,
  [sym_identifier] = sym_identifier,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_connection_property] = sym_connection_property,
  [sym_include_property] = sym_include_property,
  [sym_explore] = sym_explore,
  [sym_join] = sym_join,
  [sym_sql_on] = sym_sql_on,
  [sym_view] = sym_view,
  [sym_dimension] = sym_dimension,
  [sym_dimension_group] = sym_dimension_group,
  [sym_measure] = sym_measure,
  [sym_set] = sym_set,
  [sym_primary_key] = sym_primary_key,
  [sym_type] = sym_type,
  [sym_sql] = sym_sql,
  [sym_value_format] = sym_value_format,
  [sym_drill_fields] = sym_drill_fields,
  [sym_fields] = sym_fields,
  [sym_timeframes] = sym_timeframes,
  [sym_dot_walked_identifier] = sym_dot_walked_identifier,
  [sym_field_identifier] = sym_field_identifier,
  [sym_identifier_with_asterisk] = sym_identifier_with_asterisk,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_explore_repeat1] = aux_sym_explore_repeat1,
  [aux_sym_view_repeat1] = aux_sym_view_repeat1,
  [aux_sym_dimension_repeat1] = aux_sym_dimension_repeat1,
  [aux_sym_dimension_group_repeat1] = aux_sym_dimension_group_repeat1,
  [aux_sym_measure_repeat1] = aux_sym_measure_repeat1,
  [aux_sym_drill_fields_repeat1] = aux_sym_drill_fields_repeat1,
  [aux_sym_fields_repeat1] = aux_sym_fields_repeat1,
  [aux_sym_timeframes_repeat1] = aux_sym_timeframes_repeat1,
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
  [anon_sym_dimension_group_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_measure_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_COLON] = {
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
  [anon_sym_drill_fields_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fields_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeframes_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
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
  [sym_dimension_group] = {
    .visible = true,
    .named = true,
  },
  [sym_measure] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
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
  [sym_drill_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_timeframes] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_walked_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_with_asterisk] = {
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
  [aux_sym_dimension_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_measure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_drill_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_timeframes_repeat1] = {
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'j') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == 'v') ADVANCE(171);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '}') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(137);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(144);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(125);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(134);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(136);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(140);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(133);
      END_STATE();
    case 21:
      if (lookahead == ';') ADVANCE(130);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'q') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 116:
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'j') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == '}') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_connection_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_connection_property_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_connection_property_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_include_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_explore_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_join_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_sql_on_COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_view_COLON);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_dimension_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_dimension_group_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_measure_COLON);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_set_COLON);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_primary_key_COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_type_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_sql_COLON);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_value_format_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_drill_fields_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_fields_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_timeframes_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == ';') ADVANCE(147);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '_') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'q') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'y') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 119},
  [2] = {.lex_state = 119},
  [3] = {.lex_state = 119},
  [4] = {.lex_state = 119},
  [5] = {.lex_state = 119},
  [6] = {.lex_state = 119},
  [7] = {.lex_state = 119},
  [8] = {.lex_state = 119},
  [9] = {.lex_state = 119},
  [10] = {.lex_state = 119},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 119},
  [14] = {.lex_state = 119},
  [15] = {.lex_state = 119},
  [16] = {.lex_state = 119},
  [17] = {.lex_state = 119},
  [18] = {.lex_state = 119},
  [19] = {.lex_state = 119},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 119},
  [22] = {.lex_state = 119},
  [23] = {.lex_state = 119},
  [24] = {.lex_state = 119},
  [25] = {.lex_state = 119},
  [26] = {.lex_state = 119},
  [27] = {.lex_state = 119},
  [28] = {.lex_state = 119},
  [29] = {.lex_state = 119},
  [30] = {.lex_state = 119},
  [31] = {.lex_state = 119},
  [32] = {.lex_state = 119},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 119},
  [35] = {.lex_state = 119},
  [36] = {.lex_state = 119},
  [37] = {.lex_state = 119},
  [38] = {.lex_state = 119},
  [39] = {.lex_state = 119},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 119},
  [56] = {.lex_state = 119},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 119},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
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
    [anon_sym_dimension_group_COLON] = ACTIONS(1),
    [anon_sym_measure_COLON] = ACTIONS(1),
    [anon_sym_set_COLON] = ACTIONS(1),
    [anon_sym_primary_key_COLON] = ACTIONS(1),
    [anon_sym_type_COLON] = ACTIONS(1),
    [anon_sym_sql_COLON] = ACTIONS(1),
    [anon_sym_value_format_COLON] = ACTIONS(1),
    [anon_sym_drill_fields_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_fields_COLON] = ACTIONS(1),
    [anon_sym_timeframes_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym_connection_property] = STATE(5),
    [sym_include_property] = STATE(5),
    [sym_explore] = STATE(5),
    [sym_view] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
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
      anon_sym_dimension_COLON,
    ACTIONS(20), 1,
      anon_sym_dimension_group_COLON,
    ACTIONS(23), 1,
      anon_sym_measure_COLON,
    ACTIONS(26), 1,
      anon_sym_set_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(2), 5,
      sym_dimension,
      sym_dimension_group,
      sym_measure,
      sym_set,
      aux_sym_view_repeat1,
  [27] = 7,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_type_COLON,
    ACTIONS(34), 1,
      anon_sym_sql_COLON,
    ACTIONS(37), 1,
      anon_sym_value_format_COLON,
    ACTIONS(40), 1,
      anon_sym_drill_fields_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(3), 5,
      sym_type,
      sym_sql,
      sym_value_format,
      sym_drill_fields,
      aux_sym_measure_repeat1,
  [54] = 7,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_primary_key_COLON,
    ACTIONS(48), 1,
      anon_sym_type_COLON,
    ACTIONS(51), 1,
      anon_sym_sql_COLON,
    ACTIONS(54), 1,
      anon_sym_value_format_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(4), 5,
      sym_primary_key,
      sym_type,
      sym_sql,
      sym_value_format,
      aux_sym_dimension_repeat1,
  [81] = 7,
    ACTIONS(7), 1,
      anon_sym_connection_COLON,
    ACTIONS(9), 1,
      anon_sym_include_COLON,
    ACTIONS(11), 1,
      anon_sym_explore_COLON,
    ACTIONS(13), 1,
      anon_sym_view_COLON,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(7), 5,
      sym_connection_property,
      sym_include_property,
      sym_explore,
      sym_view,
      aux_sym_source_file_repeat1,
  [108] = 7,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_type_COLON,
    ACTIONS(63), 1,
      anon_sym_sql_COLON,
    ACTIONS(65), 1,
      anon_sym_value_format_COLON,
    ACTIONS(67), 1,
      anon_sym_drill_fields_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(3), 5,
      sym_type,
      sym_sql,
      sym_value_format,
      sym_drill_fields,
      aux_sym_measure_repeat1,
  [135] = 7,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_connection_COLON,
    ACTIONS(74), 1,
      anon_sym_include_COLON,
    ACTIONS(77), 1,
      anon_sym_explore_COLON,
    ACTIONS(80), 1,
      anon_sym_view_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(7), 5,
      sym_connection_property,
      sym_include_property,
      sym_explore,
      sym_view,
      aux_sym_source_file_repeat1,
  [162] = 7,
    ACTIONS(61), 1,
      anon_sym_type_COLON,
    ACTIONS(63), 1,
      anon_sym_sql_COLON,
    ACTIONS(65), 1,
      anon_sym_value_format_COLON,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_primary_key_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(4), 5,
      sym_primary_key,
      sym_type,
      sym_sql,
      sym_value_format,
      aux_sym_dimension_repeat1,
  [189] = 7,
    ACTIONS(61), 1,
      anon_sym_type_COLON,
    ACTIONS(63), 1,
      anon_sym_sql_COLON,
    ACTIONS(65), 1,
      anon_sym_value_format_COLON,
    ACTIONS(67), 1,
      anon_sym_drill_fields_COLON,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(6), 5,
      sym_type,
      sym_sql,
      sym_value_format,
      sym_drill_fields,
      aux_sym_measure_repeat1,
  [216] = 7,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_dimension_COLON,
    ACTIONS(93), 1,
      anon_sym_dimension_group_COLON,
    ACTIONS(95), 1,
      anon_sym_measure_COLON,
    ACTIONS(97), 1,
      anon_sym_set_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(11), 5,
      sym_dimension,
      sym_dimension_group,
      sym_measure,
      sym_set,
      aux_sym_view_repeat1,
  [243] = 7,
    ACTIONS(91), 1,
      anon_sym_dimension_COLON,
    ACTIONS(93), 1,
      anon_sym_dimension_group_COLON,
    ACTIONS(95), 1,
      anon_sym_measure_COLON,
    ACTIONS(97), 1,
      anon_sym_set_COLON,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(2), 5,
      sym_dimension,
      sym_dimension_group,
      sym_measure,
      sym_set,
      aux_sym_view_repeat1,
  [270] = 7,
    ACTIONS(61), 1,
      anon_sym_type_COLON,
    ACTIONS(63), 1,
      anon_sym_sql_COLON,
    ACTIONS(65), 1,
      anon_sym_value_format_COLON,
    ACTIONS(85), 1,
      anon_sym_primary_key_COLON,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(8), 5,
      sym_primary_key,
      sym_type,
      sym_sql,
      sym_value_format,
      aux_sym_dimension_repeat1,
  [297] = 6,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_type_COLON,
    ACTIONS(108), 1,
      anon_sym_sql_COLON,
    ACTIONS(111), 1,
      anon_sym_timeframes_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(13), 4,
      sym_type,
      sym_sql,
      sym_timeframes,
      aux_sym_dimension_group_repeat1,
  [320] = 6,
    ACTIONS(61), 1,
      anon_sym_type_COLON,
    ACTIONS(63), 1,
      anon_sym_sql_COLON,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_timeframes_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(13), 4,
      sym_type,
      sym_sql,
      sym_timeframes,
      aux_sym_dimension_group_repeat1,
  [343] = 6,
    ACTIONS(61), 1,
      anon_sym_type_COLON,
    ACTIONS(63), 1,
      anon_sym_sql_COLON,
    ACTIONS(116), 1,
      anon_sym_timeframes_COLON,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(14), 4,
      sym_type,
      sym_sql,
      sym_timeframes,
      aux_sym_dimension_group_repeat1,
  [366] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(120), 7,
      anon_sym_RBRACE,
      anon_sym_primary_key_COLON,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
      anon_sym_drill_fields_COLON,
      anon_sym_timeframes_COLON,
  [380] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(122), 7,
      anon_sym_RBRACE,
      anon_sym_primary_key_COLON,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
      anon_sym_drill_fields_COLON,
      anon_sym_timeframes_COLON,
  [394] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(124), 6,
      anon_sym_RBRACE,
      anon_sym_primary_key_COLON,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
      anon_sym_drill_fields_COLON,
  [407] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(126), 5,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
      anon_sym_dimension_group_COLON,
      anon_sym_measure_COLON,
      anon_sym_set_COLON,
  [419] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(128), 5,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
      anon_sym_dimension_group_COLON,
      anon_sym_measure_COLON,
      anon_sym_set_COLON,
  [431] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(130), 5,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
      anon_sym_dimension_group_COLON,
      anon_sym_measure_COLON,
      anon_sym_set_COLON,
  [443] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [455] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
      anon_sym_dimension_group_COLON,
      anon_sym_measure_COLON,
      anon_sym_set_COLON,
  [467] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
      anon_sym_dimension_group_COLON,
      anon_sym_measure_COLON,
      anon_sym_set_COLON,
  [479] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(138), 5,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
      anon_sym_dimension_group_COLON,
      anon_sym_measure_COLON,
      anon_sym_set_COLON,
  [491] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(140), 5,
      anon_sym_RBRACE,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
      anon_sym_drill_fields_COLON,
  [503] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [515] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [527] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(146), 5,
      anon_sym_RBRACE,
      anon_sym_primary_key_COLON,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
  [539] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [551] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [563] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(152), 5,
      anon_sym_RBRACE,
      anon_sym_dimension_COLON,
      anon_sym_dimension_group_COLON,
      anon_sym_measure_COLON,
      anon_sym_set_COLON,
  [575] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_RBRACE,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_value_format_COLON,
      anon_sym_drill_fields_COLON,
  [587] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_connection_COLON,
      anon_sym_include_COLON,
      anon_sym_explore_COLON,
      anon_sym_view_COLON,
  [599] = 4,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_join_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(36), 2,
      sym_join,
      aux_sym_explore_repeat1,
  [614] = 4,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_join_COLON,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(36), 2,
      sym_join,
      aux_sym_explore_repeat1,
  [629] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(167), 4,
      anon_sym_RBRACE,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_timeframes_COLON,
  [640] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      anon_sym_type_COLON,
      anon_sym_sql_COLON,
      anon_sym_timeframes_COLON,
  [651] = 4,
    ACTIONS(160), 1,
      anon_sym_join_COLON,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    STATE(35), 2,
      sym_join,
      aux_sym_explore_repeat1,
  [666] = 4,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_timeframes_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [680] = 4,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_drill_fields_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [694] = 4,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_fields_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [708] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_drill_fields_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [722] = 4,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(50), 1,
      sym_field_identifier,
    STATE(53), 1,
      sym_dot_walked_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [736] = 4,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_timeframes_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [750] = 4,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_timeframes_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [764] = 4,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dot_walked_identifier,
    STATE(63), 1,
      sym_field_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [778] = 3,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [790] = 4,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_fields_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [804] = 4,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_fields_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [818] = 4,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_drill_fields_repeat1,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [832] = 3,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [844] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [853] = 3,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(59), 1,
      sym_identifier_with_asterisk,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [864] = 3,
    ACTIONS(218), 1,
      anon_sym_sql_on_COLON,
    STATE(87), 1,
      sym_sql_on,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [875] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_RBRACE,
      anon_sym_join_COLON,
  [884] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [893] = 3,
    ACTIONS(222), 1,
      anon_sym_fields_COLON,
    STATE(75), 1,
      sym_fields,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [904] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [913] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [922] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [931] = 3,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(41), 1,
      sym_identifier_with_asterisk,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [942] = 2,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [951] = 2,
    ACTIONS(230), 1,
      sym_expression,
    ACTIONS(228), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [959] = 2,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [967] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [975] = 2,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [983] = 2,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [991] = 2,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [999] = 2,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1007] = 2,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1015] = 2,
    ACTIONS(246), 1,
      sym_string,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1023] = 2,
    ACTIONS(248), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1031] = 2,
    ACTIONS(250), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1039] = 2,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1047] = 2,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1055] = 2,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1063] = 2,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1071] = 2,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1079] = 2,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1087] = 2,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1095] = 2,
    ACTIONS(266), 1,
      sym_string,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1103] = 2,
    ACTIONS(268), 1,
      sym_expression,
    ACTIONS(228), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1111] = 2,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1119] = 2,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1127] = 2,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1135] = 2,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1143] = 2,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1151] = 2,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1159] = 2,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1167] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1175] = 2,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1183] = 2,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1191] = 2,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1199] = 2,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1207] = 2,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1215] = 2,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1223] = 2,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      aux_sym_connection_property_token1,
      sym_comment,
  [1231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym_connection_property_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 343,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 380,
  [SMALL_STATE(18)] = 394,
  [SMALL_STATE(19)] = 407,
  [SMALL_STATE(20)] = 419,
  [SMALL_STATE(21)] = 431,
  [SMALL_STATE(22)] = 443,
  [SMALL_STATE(23)] = 455,
  [SMALL_STATE(24)] = 467,
  [SMALL_STATE(25)] = 479,
  [SMALL_STATE(26)] = 491,
  [SMALL_STATE(27)] = 503,
  [SMALL_STATE(28)] = 515,
  [SMALL_STATE(29)] = 527,
  [SMALL_STATE(30)] = 539,
  [SMALL_STATE(31)] = 551,
  [SMALL_STATE(32)] = 563,
  [SMALL_STATE(33)] = 575,
  [SMALL_STATE(34)] = 587,
  [SMALL_STATE(35)] = 599,
  [SMALL_STATE(36)] = 614,
  [SMALL_STATE(37)] = 629,
  [SMALL_STATE(38)] = 640,
  [SMALL_STATE(39)] = 651,
  [SMALL_STATE(40)] = 666,
  [SMALL_STATE(41)] = 680,
  [SMALL_STATE(42)] = 694,
  [SMALL_STATE(43)] = 708,
  [SMALL_STATE(44)] = 722,
  [SMALL_STATE(45)] = 736,
  [SMALL_STATE(46)] = 750,
  [SMALL_STATE(47)] = 764,
  [SMALL_STATE(48)] = 778,
  [SMALL_STATE(49)] = 790,
  [SMALL_STATE(50)] = 804,
  [SMALL_STATE(51)] = 818,
  [SMALL_STATE(52)] = 832,
  [SMALL_STATE(53)] = 844,
  [SMALL_STATE(54)] = 853,
  [SMALL_STATE(55)] = 864,
  [SMALL_STATE(56)] = 875,
  [SMALL_STATE(57)] = 884,
  [SMALL_STATE(58)] = 893,
  [SMALL_STATE(59)] = 904,
  [SMALL_STATE(60)] = 913,
  [SMALL_STATE(61)] = 922,
  [SMALL_STATE(62)] = 931,
  [SMALL_STATE(63)] = 942,
  [SMALL_STATE(64)] = 951,
  [SMALL_STATE(65)] = 959,
  [SMALL_STATE(66)] = 967,
  [SMALL_STATE(67)] = 975,
  [SMALL_STATE(68)] = 983,
  [SMALL_STATE(69)] = 991,
  [SMALL_STATE(70)] = 999,
  [SMALL_STATE(71)] = 1007,
  [SMALL_STATE(72)] = 1015,
  [SMALL_STATE(73)] = 1023,
  [SMALL_STATE(74)] = 1031,
  [SMALL_STATE(75)] = 1039,
  [SMALL_STATE(76)] = 1047,
  [SMALL_STATE(77)] = 1055,
  [SMALL_STATE(78)] = 1063,
  [SMALL_STATE(79)] = 1071,
  [SMALL_STATE(80)] = 1079,
  [SMALL_STATE(81)] = 1087,
  [SMALL_STATE(82)] = 1095,
  [SMALL_STATE(83)] = 1103,
  [SMALL_STATE(84)] = 1111,
  [SMALL_STATE(85)] = 1119,
  [SMALL_STATE(86)] = 1127,
  [SMALL_STATE(87)] = 1135,
  [SMALL_STATE(88)] = 1143,
  [SMALL_STATE(89)] = 1151,
  [SMALL_STATE(90)] = 1159,
  [SMALL_STATE(91)] = 1167,
  [SMALL_STATE(92)] = 1175,
  [SMALL_STATE(93)] = 1183,
  [SMALL_STATE(94)] = 1191,
  [SMALL_STATE(95)] = 1199,
  [SMALL_STATE(96)] = 1207,
  [SMALL_STATE(97)] = 1215,
  [SMALL_STATE(98)] = 1223,
  [SMALL_STATE(99)] = 1231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_view_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_repeat1, 2), SHIFT_REPEAT(89),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_repeat1, 2), SHIFT_REPEAT(97),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_repeat1, 2), SHIFT_REPEAT(96),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_repeat1, 2), SHIFT_REPEAT(95),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_measure_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_measure_repeat1, 2), SHIFT_REPEAT(84),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_measure_repeat1, 2), SHIFT_REPEAT(83),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_measure_repeat1, 2), SHIFT_REPEAT(82),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_measure_repeat1, 2), SHIFT_REPEAT(78),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(85),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(84),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(83),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(82),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_group_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_group_repeat1, 2), SHIFT_REPEAT(84),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_group_repeat1, 2), SHIFT_REPEAT(83),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_group_repeat1, 2), SHIFT_REPEAT(65),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_format, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension_group, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drill_fields, 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_property, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explore, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_property, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension_group, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drill_fields, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explore, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explore_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explore_repeat1, 2), SHIFT_REPEAT(70),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeframes, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeframes, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeframes_repeat1, 2), SHIFT_REPEAT(79),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeframes_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(47),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_drill_fields_repeat1, 2), SHIFT_REPEAT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_drill_fields_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_with_asterisk, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_with_asterisk, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_walked_identifier, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_on, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
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
