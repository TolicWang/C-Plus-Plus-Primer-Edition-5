/*************************************************************************
	> File Name: svec.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 07:27:23 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str("i love you!");
    //string also can be used as a vector
    for(auto it = str.begin(); it != str.end(); ++it)
    cout<<*it;
    cout<<endl;
    return 0;
}

