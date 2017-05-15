/*************************************************************************
	> File Name: 6_16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 14时56分50秒
 ************************************************************************/

// 编译时会提示如下错误，因为is_empty()和c++已有的函数名重复了，所以改名即可
 /*error: reference to ‘is_empty’ is ambiguous
     if(is_empty(s))*/


#include<iostream>
#include<string>
using namespace std;
//bool is_empty(const string &s)
bool isEmpty(string &s)
    //如果文中所提及，这样的声明交不能把const对象,字面值等传递给形参
    //应该改为bool isEmpty(const string &s)
{
    return s.empty();
}
int main()
{
    string s;
    if(isEmpty(s))
    cout<<"yes\n";
    else
    cout<<"no\n";
    return 0;
}


