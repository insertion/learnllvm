# CMake命令不区分大小写
project (leanllvm)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)

set(SRC lex/lexer.cc)
add_executable(lexer ${SRC})
