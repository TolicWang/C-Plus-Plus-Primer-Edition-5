/*************************************************************************
	> File Name: Chapter6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月14日 星期日 14时49分23秒
 ************************************************************************/

#include<iostream>
#include"Chapter6.h"
using namespace std;
int sign(double x)
{
    return x > 0 ? 1 : -1;
}
size_t count_calls()
{
    static size_t ctr = 0;
    return ++ctr;
}

