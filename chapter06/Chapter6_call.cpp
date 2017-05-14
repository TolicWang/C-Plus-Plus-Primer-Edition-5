/*************************************************************************
	> File Name: Chapter6_call.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月14日 星期日 14时51分13秒
 ************************************************************************/

#include<iostream>
#include"Chapter6.h"
using namespace std;
int main()
{
    double x;
    while(cin>>x)
        cout<<x*sign(x)<<"  calls:"<<count_calls()<<endl;
}

