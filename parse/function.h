#include "base.h"
#include "prototype.h"

class FunctionAst {
  ProtoTypeAst *proto;
  ExprAst *body;

public:
  FunctionAst(ProtoTypeAst *proto, ExprAst *body) {
    this->proto = proto;
    this->body = body;
  }
};
