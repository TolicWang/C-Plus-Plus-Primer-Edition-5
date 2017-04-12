/*************************************************************************
	> File Name: 3_31.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 07:49:29 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i = 0; i < 10; ++i)
        arr[i] = i;
    for(auto i : arr)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}

