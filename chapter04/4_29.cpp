/*************************************************************************
	> File Name: 4_29.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 14时28分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int x[10];
    int *p = x;
    cout<<sizeof(x) / sizeof(*x)<<endl;
    cout<<sizeof(p) / sizeof(*p)<<endl;
    return 0;
}

