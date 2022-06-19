#include <string>
#include <vector>

class ProtoTypeAst {
  std::string name;
  std::vector<std::string> args;

public:
  ProtoTypeAst(const std::string &name, const std::vector<std::string> &args)
      : name(name), args(args) {}
};
