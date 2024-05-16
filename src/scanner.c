#include "tree_sitter/parser.h"

enum TokenType {
  CLOSING_PAREN,
};

void *tree_sitter_math_external_scanner_create() { return NULL; }
void tree_sitter_math_external_scanner_destroy(void *p) {}
void tree_sitter_math_external_scanner_reset(void *p) {}
unsigned tree_sitter_math_external_scanner_serialize(void *p, char *buffer) {
  return 0;
}
void tree_sitter_math_external_scanner_deserialize(void *p, const char *b,
                                                   unsigned n) {}

bool tree_sitter_math_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  if (valid_symbols[CLOSING_PAREN]) {
    for (;;) {
      switch (lexer->lookahead) {
      case ' ':
      case '\t':
      case '\n':
      case '\r':
        lexer->advance(lexer, true);
        break;
      case ')':
      case 0:
        lexer->advance(lexer, false);
        lexer->result_symbol = CLOSING_PAREN;
        return true;
      default:
        return false;
      }
    }
  } else {
    return false;
  }
}
