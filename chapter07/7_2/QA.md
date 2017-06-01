
## **string isbn() const {return bookNo;} 为什么不能把返回类型改为string&?**

<font color=red size=5>为什么编译会出错？</font>

返回引用, 就意味着外部调用的时候, 可能对 bookNo 进行修改. 但你又对该成员函数进行了 const 修饰. 这又意味着, 外部调用者无权对该对象进行任何修改. 显然, 这两者是矛盾的. 于是编译器就困惑了...

<font color=red size=5>为什么这儿不能返回引用？</font>

当然可以返回引用, 但你要保证行为遵循逻辑, 如:

std::string& isbn() { return bookNo; } // 返回引用
const std::string& isbn() { return bookNo; } // 返回 const 引用
const std::string& isbn() const { return bookNo; } // 针对 const 对象返回 const 引用

上述三种改法, 都是可以的.

