/*************************************************************************
	> File Name: p202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月16日 星期二 16时49分12秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}
int main()
{
    string s("a value");
    cout<<s<<endl;
    get_val(s,0) = 'A';
    cout<<s<<endl;
    return {0};
}

