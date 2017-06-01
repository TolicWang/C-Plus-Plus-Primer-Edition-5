/*************************************************************************
	> File Name: p201.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 19时42分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
const string &shorterString(string &s1, string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}
int main()
{
    string s1 = "hello",s2 = "girl";
    const string &s3 = shorterString(s1,s2);
    cout<<&s1<<endl;
    cout<<&s2<<endl;
    cout<<&s3<<endl;
    return 0;
}

