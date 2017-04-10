/*************************************************************************
	> File Name: p83.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 10:23:08 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str("some,string!!!!");
    decltype(str.size()) cnt = 0;// <==> string::size_type cnt = 0;
    for( auto c: str)
    if(ispunct(c))
        ++cnt;
    cout<<cnt<<endl;
    return 0;
}

