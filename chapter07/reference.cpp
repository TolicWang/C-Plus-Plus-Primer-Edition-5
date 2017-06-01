/*************************************************************************
	> File Name: reference.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月01日 星期四 08时40分51秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
string r1(string &s)
{
    s += " reference_1";
    return s;
}

string &r2(string &s)
{
    s += " reference_2";
    return s;
}
// 根据函数返回值的类型决定返回的内容
int main()
{
    string str = "str";
    str = r2(str);
    cout<<str<<endl;
    return 0;
}
