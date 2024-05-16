#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_PLUS = 1,
  anon_sym_DASH = 2,
  anon_sym_STAR = 3,
  anon_sym_SLASH = 4,
  anon_sym_STAR_STAR = 5,
  anon_sym_CARET = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_number = 9,
  sym_variable = 10,
  sym_expression = 11,
  sym__expression = 12,
  sym_sum = 13,
  sym_subtraction = 14,
  sym_product = 15,
  sym_division = 16,
  sym_exponent = 17,
  sym_parenthesized_expression = 18,
  alias_sym_function_name = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [sym_variable] = "variable",
  [sym_expression] = "expression",
  [sym__expression] = "_expression",
  [sym_sum] = "sum",
  [sym_subtraction] = "subtraction",
  [sym_product] = "product",
  [sym_division] = "division",
  [sym_exponent] = "exponent",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [alias_sym_function_name] = "function_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [sym_variable] = sym_variable,
  [sym_expression] = sym_expression,
  [sym__expression] = sym__expression,
  [sym_sum] = sym_sum,
  [sym_subtraction] = sym_subtraction,
  [sym_product] = sym_product,
  [sym_division] = sym_division,
  [sym_exponent] = sym_exponent,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [alias_sym_function_name] = alias_sym_function_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction] = {
    .visible = true,
    .named = true,
  },
  [sym_product] = {
    .visible = true,
    .named = true,
  },
  [sym_division] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_base = 1,
  field_exponent = 2,
  field_left = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_exponent] = "exponent",
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
  [2] =
    {field_base, 0},
    {field_exponent, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_function_name,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '^') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(20),
    [sym__expression] = STATE(19),
    [sym_sum] = STATE(19),
    [sym_subtraction] = STATE(19),
    [sym_product] = STATE(19),
    [sym_division] = STATE(19),
    [sym_exponent] = STATE(19),
    [sym_parenthesized_expression] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_variable] = ACTIONS(7),
  },
  [2] = {
    [sym__expression] = STATE(13),
    [sym_sum] = STATE(13),
    [sym_subtraction] = STATE(13),
    [sym_product] = STATE(13),
    [sym_division] = STATE(13),
    [sym_exponent] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(9),
    [sym_variable] = ACTIONS(7),
  },
  [3] = {
    [sym__expression] = STATE(17),
    [sym_sum] = STATE(17),
    [sym_subtraction] = STATE(17),
    [sym_product] = STATE(17),
    [sym_division] = STATE(17),
    [sym_exponent] = STATE(17),
    [sym_parenthesized_expression] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(11),
    [sym_variable] = ACTIONS(7),
  },
  [4] = {
    [sym__expression] = STATE(15),
    [sym_sum] = STATE(15),
    [sym_subtraction] = STATE(15),
    [sym_product] = STATE(15),
    [sym_division] = STATE(15),
    [sym_exponent] = STATE(15),
    [sym_parenthesized_expression] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(13),
    [sym_variable] = ACTIONS(7),
  },
  [5] = {
    [sym__expression] = STATE(14),
    [sym_sum] = STATE(14),
    [sym_subtraction] = STATE(14),
    [sym_product] = STATE(14),
    [sym_division] = STATE(14),
    [sym_exponent] = STATE(14),
    [sym_parenthesized_expression] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(15),
    [sym_variable] = ACTIONS(7),
  },
  [6] = {
    [sym__expression] = STATE(18),
    [sym_sum] = STATE(18),
    [sym_subtraction] = STATE(18),
    [sym_product] = STATE(18),
    [sym_division] = STATE(18),
    [sym_exponent] = STATE(18),
    [sym_parenthesized_expression] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(17),
    [sym_variable] = ACTIONS(7),
  },
  [7] = {
    [sym__expression] = STATE(10),
    [sym_sum] = STATE(10),
    [sym_subtraction] = STATE(10),
    [sym_product] = STATE(10),
    [sym_division] = STATE(10),
    [sym_exponent] = STATE(10),
    [sym_parenthesized_expression] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(19),
    [sym_variable] = ACTIONS(7),
  },
  [8] = {
    [sym__expression] = STATE(12),
    [sym_sum] = STATE(12),
    [sym_subtraction] = STATE(12),
    [sym_product] = STATE(12),
    [sym_division] = STATE(12),
    [sym_exponent] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(21),
    [sym_variable] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [16] = 4,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [33] = 2,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [46] = 4,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [63] = 3,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(35), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [78] = 3,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(35), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [93] = 2,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [106] = 2,
    ACTIONS(57), 1,
      anon_sym_STAR,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [119] = 6,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_PLUS,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [139] = 6,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_PLUS,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [159] = 6,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_PLUS,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [179] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 16,
  [SMALL_STATE(11)] = 33,
  [SMALL_STATE(12)] = 46,
  [SMALL_STATE(13)] = 63,
  [SMALL_STATE(14)] = 78,
  [SMALL_STATE(15)] = 93,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 119,
  [SMALL_STATE(18)] = 139,
  [SMALL_STATE(19)] = 159,
  [SMALL_STATE(20)] = 179,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, 0, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction, 3, 0, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division, 3, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division, 3, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 4, 0, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 4, 0, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_math(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
