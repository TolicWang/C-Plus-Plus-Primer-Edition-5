/*************************************************************************
	> File Name: p201.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 19时42分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
//const string &shorterString(const string &s1,const string &s2)
const string &test(const string &s2)
{
    //return s1.size() <= s2.size() ? s1 : s2;
    cout<<&s2<<endl;
    return s2;
}
int main()
{
    string s1 = "hello",s2 = "girl",s3;
    //s3 = shorterString(s1,s2);
    s3 = test(s2);
    cout<<&s2<<endl;
    cout<<&s3<<endl;
    return 0;
}

