/*************************************************************************
	> File Name: 3_8.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 02:08:13 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str("hello world!");
    for(string::size_type i = 0;
       i < str.size();
       ++i)
    str[i] = 'X';
    cout<<str<<endl;



    string s("hello world!");
    string::size_type j = 0;
    while(j < s.size())
    s[j++] = 'X';
    cout<<s<<endl;
    return 0;

    
}

