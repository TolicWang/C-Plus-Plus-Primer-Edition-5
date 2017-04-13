/*************************************************************************
	> File Name: vector.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Apr 2017 08:57:25 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec;
    for(int i = 0; i < 10; ++i)
        ivec.push_back(i);

    //遍历vector元素
    //1: 利用迭代器
    for(auto it = ivec.begin(); it != ivec.end(); ++it)
        cout<<*it<<" ";
    cout<<endl;
    //2: 利用下标操作符
    for(auto i = 0; i < ivec.size(); ++i)
        cout<<ivec[i]<<" ";
    cout<<endl;
    //3: 利用范围for循环
    for(auto i : ivec)
        cout<<i<<" ";
    cout<<endl<<endl;


    //修改vector中的元素（前提条件是vector中已有元素，且以下方式均不能改变已有元素的个数）
    //1: 利用迭代器
    for(auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it = *it * 2;
        cout<<*it<<" ";
    }
    cout<<endl;
    //2: 利用下标操作符
    for(auto i = 0; i < ivec.size(); ++i)
    {
        ivec[i] = ivec[i] * 2;
        cout<<ivec[i]<<" ";
    }
    cout<<endl;
    //3: 利用范围for循环
    for(auto &i : ivec)//注意此处是引用
    {
        i = i * 2;
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

