/*************************************************************************
	> File Name: 6_21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 16时20分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
int compare(const int n, const int *const p)
{
    return n > *p ? n : *p;
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<compare(a,&b)<<endl;
    }
    return 0;
}

