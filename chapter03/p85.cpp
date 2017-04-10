/*************************************************************************
	> File Name: p85.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 10:52:43 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str("Hello world!");
    //method 1:
    /*for(string::size_type i = 0; 
        i < str.size() && !isspace(str[i]);
       ++i )
    str[i] = toupper(str[i]);*/

    //method 2
    for( auto &c : str )
    {
        if(isspace(c)) break;
        c = toupper(c);
    }
    cout<<str<<endl;
    return 0;
}

