
#include "../lex/lexer.h"
#include "base.h"
#include <string>
/// VariableExprAST - Expression class for referencing a variable, like "a".
class VariableExprAst : public ExprAst {
  std::string name;

public:
  VariableExprAst(const std::string &name) : name(name) {}
  /* identifierExpr ::= T_indentifier */
  static ExprAst *ParseIdentifierExpr() {
    ExprAst *result = new VariableExprAst(g_identifierStr);
    getNextToken();
    return result;
  }
};
