/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月16日 星期二 17时11分46秒
 ************************************************************************/

#include<iostream>
using namespace std;
void print(const int *p, int n)
{
    for(int i = 0; i < n; ++i)
        cout<<*p++;
}
int main()
{
    int a[] = {1,2,3,4,5};
    print(a,5);
    return 0;
}

