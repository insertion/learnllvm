
# 智能指针
将基本类型指针封装成指针对象,在对象销毁的同时进行内存的释放(利用析构函数的特性)
```
std::unique_ptr 是一种独占的智能指针,独占不可赋值,可以使用std::move转移使用权
std::shared_ptr 是一种共享的智能指针,包含引用计数
```

# 递归下降分析算法
递归下降分析又称之为自顶向下分析法(LL(1)), 其基本思想如下:
- 为每个非终结符构造一个分析函数, 不断对非终结符进行分解, 直到匹配到终结符
- 使用look-ahead指导产生式的判断
**约束**: 同一个非终结符的不同产生式的首字符集合互不相交(保证look-ahead不会误判)

# 语法
```
simpleExpr      : T_number
                | '(' expr ')'
                | identifierexpr
                ;

/* need look-ahead */                
identifierexpr  : T_identifier
                | T_identifier '(' expr* ')' 
                ;

binoprhs        : (T_op simpleExpr)*
                ;

expr            : simpleExpr binoprhs
                ;
```
