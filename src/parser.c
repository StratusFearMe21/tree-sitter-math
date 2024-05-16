#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 1
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
  sym_number = 8,
  sym_variable = 9,
  sym__closing_paren = 10,
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
  [sym_number] = "number",
  [sym_variable] = "variable",
  [sym__closing_paren] = "_closing_paren",
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
  [sym_number] = sym_number,
  [sym_variable] = sym_variable,
  [sym__closing_paren] = sym__closing_paren,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__closing_paren] = {
    .visible = false,
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 5,
  [12] = 10,
  [13] = 9,
  [14] = 8,
  [15] = 7,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 23,
  [28] = 22,
  [29] = 21,
  [30] = 18,
  [31] = 19,
  [32] = 20,
  [33] = 33,
  [34] = 24,
  [35] = 33,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '^') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '-') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
    [sym_variable] = ACTIONS(1),
    [sym__closing_paren] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(37),
    [sym__expression] = STATE(36),
    [sym_sum] = STATE(36),
    [sym_subtraction] = STATE(36),
    [sym_product] = STATE(36),
    [sym_division] = STATE(36),
    [sym_exponent] = STATE(36),
    [sym_parenthesized_expression] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_variable] = ACTIONS(7),
  },
  [2] = {
    [sym__expression] = STATE(35),
    [sym_sum] = STATE(35),
    [sym_subtraction] = STATE(35),
    [sym_product] = STATE(35),
    [sym_division] = STATE(35),
    [sym_exponent] = STATE(35),
    [sym_parenthesized_expression] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
  },
  [3] = {
    [sym__expression] = STATE(34),
    [sym_sum] = STATE(34),
    [sym_subtraction] = STATE(34),
    [sym_product] = STATE(34),
    [sym_division] = STATE(34),
    [sym_exponent] = STATE(34),
    [sym_parenthesized_expression] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(15),
    [sym_variable] = ACTIONS(13),
  },
  [4] = {
    [sym__expression] = STATE(33),
    [sym_sum] = STATE(33),
    [sym_subtraction] = STATE(33),
    [sym_product] = STATE(33),
    [sym_division] = STATE(33),
    [sym_exponent] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_variable] = ACTIONS(13),
  },
  [5] = {
    [sym__expression] = STATE(31),
    [sym_sum] = STATE(31),
    [sym_subtraction] = STATE(31),
    [sym_product] = STATE(31),
    [sym_division] = STATE(31),
    [sym_exponent] = STATE(31),
    [sym_parenthesized_expression] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(19),
    [sym_variable] = ACTIONS(13),
  },
  [6] = {
    [sym__expression] = STATE(24),
    [sym_sum] = STATE(24),
    [sym_subtraction] = STATE(24),
    [sym_product] = STATE(24),
    [sym_division] = STATE(24),
    [sym_exponent] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(21),
    [sym_variable] = ACTIONS(13),
  },
  [7] = {
    [sym__expression] = STATE(23),
    [sym_sum] = STATE(23),
    [sym_subtraction] = STATE(23),
    [sym_product] = STATE(23),
    [sym_division] = STATE(23),
    [sym_exponent] = STATE(23),
    [sym_parenthesized_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(23),
    [sym_variable] = ACTIONS(7),
  },
  [8] = {
    [sym__expression] = STATE(22),
    [sym_sum] = STATE(22),
    [sym_subtraction] = STATE(22),
    [sym_product] = STATE(22),
    [sym_division] = STATE(22),
    [sym_exponent] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(25),
    [sym_variable] = ACTIONS(7),
  },
  [9] = {
    [sym__expression] = STATE(21),
    [sym_sum] = STATE(21),
    [sym_subtraction] = STATE(21),
    [sym_product] = STATE(21),
    [sym_division] = STATE(21),
    [sym_exponent] = STATE(21),
    [sym_parenthesized_expression] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(27),
    [sym_variable] = ACTIONS(7),
  },
  [10] = {
    [sym__expression] = STATE(18),
    [sym_sum] = STATE(18),
    [sym_subtraction] = STATE(18),
    [sym_product] = STATE(18),
    [sym_division] = STATE(18),
    [sym_exponent] = STATE(18),
    [sym_parenthesized_expression] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(29),
    [sym_variable] = ACTIONS(7),
  },
  [11] = {
    [sym__expression] = STATE(19),
    [sym_sum] = STATE(19),
    [sym_subtraction] = STATE(19),
    [sym_product] = STATE(19),
    [sym_division] = STATE(19),
    [sym_exponent] = STATE(19),
    [sym_parenthesized_expression] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(31),
    [sym_variable] = ACTIONS(7),
  },
  [12] = {
    [sym__expression] = STATE(30),
    [sym_sum] = STATE(30),
    [sym_subtraction] = STATE(30),
    [sym_product] = STATE(30),
    [sym_division] = STATE(30),
    [sym_exponent] = STATE(30),
    [sym_parenthesized_expression] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(33),
    [sym_variable] = ACTIONS(13),
  },
  [13] = {
    [sym__expression] = STATE(29),
    [sym_sum] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_product] = STATE(29),
    [sym_division] = STATE(29),
    [sym_exponent] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(35),
    [sym_variable] = ACTIONS(13),
  },
  [14] = {
    [sym__expression] = STATE(28),
    [sym_sum] = STATE(28),
    [sym_subtraction] = STATE(28),
    [sym_product] = STATE(28),
    [sym_division] = STATE(28),
    [sym_exponent] = STATE(28),
    [sym_parenthesized_expression] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(37),
    [sym_variable] = ACTIONS(13),
  },
  [15] = {
    [sym__expression] = STATE(27),
    [sym_sum] = STATE(27),
    [sym_subtraction] = STATE(27),
    [sym_product] = STATE(27),
    [sym_division] = STATE(27),
    [sym_exponent] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(39),
    [sym_variable] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [15] = 3,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 6,
      sym__closing_paren,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [30] = 3,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [44] = 2,
    ACTIONS(57), 1,
      anon_sym_STAR,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [56] = 2,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [68] = 3,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(53), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [82] = 4,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(53), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
  [98] = 4,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(53), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
  [114] = 6,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      sym__closing_paren,
    ACTIONS(83), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [134] = 2,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [146] = 2,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(87), 6,
      sym__closing_paren,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [158] = 4,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(73), 3,
      sym__closing_paren,
      anon_sym_PLUS,
      anon_sym_DASH,
  [174] = 4,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(67), 3,
      sym__closing_paren,
      anon_sym_PLUS,
      anon_sym_DASH,
  [190] = 3,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(63), 4,
      sym__closing_paren,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [204] = 3,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(83), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
    ACTIONS(49), 4,
      sym__closing_paren,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [218] = 2,
    ACTIONS(57), 1,
      anon_sym_STAR,
    ACTIONS(55), 6,
      sym__closing_paren,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [230] = 2,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(59), 6,
      sym__closing_paren,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [242] = 6,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(91), 1,
      sym__closing_paren,
    ACTIONS(83), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [262] = 6,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(93), 1,
      sym__closing_paren,
    ACTIONS(83), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [282] = 6,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      sym__closing_paren,
    ACTIONS(83), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [302] = 6,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_PLUS,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [322] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 15,
  [SMALL_STATE(18)] = 30,
  [SMALL_STATE(19)] = 44,
  [SMALL_STATE(20)] = 56,
  [SMALL_STATE(21)] = 68,
  [SMALL_STATE(22)] = 82,
  [SMALL_STATE(23)] = 98,
  [SMALL_STATE(24)] = 114,
  [SMALL_STATE(25)] = 134,
  [SMALL_STATE(26)] = 146,
  [SMALL_STATE(27)] = 158,
  [SMALL_STATE(28)] = 174,
  [SMALL_STATE(29)] = 190,
  [SMALL_STATE(30)] = 204,
  [SMALL_STATE(31)] = 218,
  [SMALL_STATE(32)] = 230,
  [SMALL_STATE(33)] = 242,
  [SMALL_STATE(34)] = 262,
  [SMALL_STATE(35)] = 282,
  [SMALL_STATE(36)] = 302,
  [SMALL_STATE(37)] = 322,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division, 3, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division, 3, 0, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, 0, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 4, 0, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 4, 0, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction, 3, 0, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__closing_paren = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__closing_paren] = sym__closing_paren,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__closing_paren] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_math_external_scanner_create(void);
void tree_sitter_math_external_scanner_destroy(void *);
bool tree_sitter_math_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_math_external_scanner_serialize(void *, char *);
void tree_sitter_math_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_math_external_scanner_create,
      tree_sitter_math_external_scanner_destroy,
      tree_sitter_math_external_scanner_scan,
      tree_sitter_math_external_scanner_serialize,
      tree_sitter_math_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
