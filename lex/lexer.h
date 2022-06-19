
#include <cstdint>
#include <string>
enum Token {
  tok_eof = -1,
  tok_def = -2,
  tok_extern = -3,
  tok_identifier = -4,
  tok_number = -5
};

extern void getNextToken();
extern uint32_t g_numVal;
extern std::string g_identifierStr;
