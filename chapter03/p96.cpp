/*************************************************************************
	> File Name: p96.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 08 Apr 2017 09:37:46 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str("some string");
    for(auto it = str.begin(); it != str.end(); ++it)
    {
        *it = toupper(*it);
    }
    cout<<str<<endl;
    for(decltype(str.size()) i = 0; i < str.size(); ++i)
    {
        str[i] = tolower(str[i]);
    }
    cout<<str<<endl;
    return 0;
}

