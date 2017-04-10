/*************************************************************************
	> File Name: 3_10.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 02:15:16 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        for(auto i : s)
            if(isalnum(i)) cout<<i;
        cout<<endl;
    }
    cout<<s<<endl;
    return 0;
}

