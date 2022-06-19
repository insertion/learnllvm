#include <string>
#include <vector>

/*
 * prototype:函数原型,包括函数的名字和参数
 */
class ProtoTypeAst {
  std::string name;
  std::vector<std::string> args;

public:
  ProtoTypeAst(const std::string &name, const std::vector<std::string> &args)
      : name(name), args(args) {}
};

/* 函数调用:包括函数名和参数 */
class CallExprAst {
  str::string funcName;
  std::vector<ExprAst*> args;
};
