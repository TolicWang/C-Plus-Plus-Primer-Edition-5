/*************************************************************************
	> File Name: p191.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 14时11分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
void reset(int *x)
{
    *x = 0;
}
int main()
{
    int i = 0;
    const int ci = i;
    string::size_type ctr = 0;
    reset(&ci);//此处编译不能通过是因为17行已经说明ci是一个常量，即不能被改变
    cout<<i<<endl;
    return 0;
}



