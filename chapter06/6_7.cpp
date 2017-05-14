/*************************************************************************
	> File Name: 6_7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月14日 星期日 14时42分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
size_t count_calls()
{
    static size_t ctr = 0;
    return ctr++;
}
int main()
{
    for(size_t i = 0; i != 10; ++i)
        cout<<count_calls()<<endl;
    return 0;
}

