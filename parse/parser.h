#include <string>
#include <vector>
#include "base.h"
class NumberExprAst : public ExprAst {
  double val;

public:
  NumberExprAst(double value) : val(value) {}
};

class VariableExprAst : public ExprAst {
  std::string name;

public:
  VariableExprAst(const std::string &name) : name(name) {}
};

class BinaryExprAst : public ExprAst {
  char op;
  ExprAst *lhs, *rhs;

public:
  BinaryExprAst(char op, ExprAst *lhs, ExprAst *rhs)
      : op(op), lhs(lhs), rhs(rhs) {}
};

class CallExprAst : public ExprAst {
  std::string callee;
  std::vector<ExprAst *> args;

public:
  CallExprAst(const std::string &callee, std::vector<ExprAst *> &args)
      : callee(callee), args(args) {}
};
