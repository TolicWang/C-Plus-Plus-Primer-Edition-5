/*************************************************************************
	> File Name: 6_32.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月16日 星期二 17时54分56秒
 ************************************************************************/

#include<iostream>
using namespace std;
void print(const int *p, int n)
{
    for(int i = 0; i < n; ++i)
        cout<<*p++;
    cout<<endl;
}
int &get(int *arry, int index)
{
    return arry[index];
}
int main()
{
    int ia[10];
    for(int i = 0; i != 10; ++i)
    {
        get(ia,i) = i;
    }
    print(ia,10);
    return 0;
}
