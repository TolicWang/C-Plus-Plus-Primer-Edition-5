/*************************************************************************
	> File Name: p78.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 02 Apr 2017 02:28:44 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line))
        if(!line.empty())
             cout<<line<<endl; 
        else
            break;
    return 0;
}

