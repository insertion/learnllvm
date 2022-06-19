#include "../lex/lexer.h"
#include <cstdio>
extern int curToken;
extern int getNextToken();
/* 分发token到各个解析单元 */
static void dispatch() {
  while (1) {
    fprintf(stderr, "==>");
    switch (curToken) {
    case tok_eof:
      return;
    case tok_def:
      return;
    case tok_extern:
      return;
    default:
      break;
    }
  }
}
