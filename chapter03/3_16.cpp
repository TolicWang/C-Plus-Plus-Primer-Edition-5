/*************************************************************************
	> File Name: 3_16.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 06 Apr 2017 04:31:48 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;// 空
    vector<int> v2(10);//10 个0
    vector<int> v3(10,42);// 10个42
    vector<int> v4{10};//一个10
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};
    for(auto v : v1)
    cout<<v<<endl;
    for(auto v : v2)
    cout<<v<<" ";
    cout<<endl;
    for(auto v : v3)
    cout<<v<<" ";
    cout<<endl;
    for(auto v : v4)
    cout<<v<<" ";
    cout<<endl;
    for(auto v : v5)
    cout<<v<<" ";
    cout<<endl;
    for(auto v : v6)
    cout<<v<<" ";
    cout<<endl;
    for(auto v : v7)
    cout<<v<<" ";
    cout<<endl;
    return 0;
}

