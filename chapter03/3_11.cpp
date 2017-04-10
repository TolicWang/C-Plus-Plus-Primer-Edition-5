/*************************************************************************
	> File Name: 3_11.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 02:32:52 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    const string s("Keep out!");
    for(auto &c : s)
    c = toupper(c);
    cout<<endl;
    return 0;
}

