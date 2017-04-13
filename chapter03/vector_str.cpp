/*************************************************************************
	> File Name: vector_str.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Apr 2017 08:57:25 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> svec{"hello","world","!"};

    //遍历vector元素
    //1: 利用迭代器
    for(auto it = svec.begin(); it != svec.end(); ++it)
        cout<<*it<<" ";
    cout<<endl;
    //2: 利用下标操作符
    for(auto i = 0; i < svec.size(); ++i)
        cout<<svec[i]<<" ";
    cout<<endl;
    //3: 利用范围for循环
    for(auto i : svec)
        cout<<i<<" ";
    cout<<endl<<endl;

    //修改vector中的元素（前提条件是vector中已有元素，且以下方式均不能改变已有元素的个数）
    //1: 利用迭代器
    for(auto it = svec.begin(); it != svec.end(); ++it)
    {
        *it = *it + "iterator";
        cout<<*it<<" ";
    }
    cout<<endl;
    //2: 利用下标操作符
    for(auto i = 0; i < svec.size(); ++i)
    {
        svec[i] = svec[i] + "subscript";
        cout<<svec[i]<<" ";
    }
    cout<<endl;
    //3: 利用范围for循环
    for(auto &i : svec)//注意此处是引用
    {
        i = i + "for";
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

