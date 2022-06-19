/// NumberExprAST - number表达式的AST节点
#include "../lex/lexer.h"
#include "base.h"
class NumberExprAst : public ExprAst {
  double Val;

public:
  NumberExprAst(double Val) : Val(Val) {}

  /* 静态成员函数只能访问静态成员变量,无this指针 */
  /* numberExpr ::= T_number */
  static ExprAst *ParseNmberExpr() {
    ExprAst *result = new NumberExprAst(g_numVal);
    getNextToken();
    return result;
  }
};
