/*************************************************************************
	> File Name: p83_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 10:36:39 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    const string str("Hello World!!!");
    //for(char &c : str)
    //for(auto &c : str)
    decltype(str.size()) i = 0,len = str.size();
    for(; i < len; ++i )
        str[i] = toupper(str[i]);
    cout<<str<<endl;
}

