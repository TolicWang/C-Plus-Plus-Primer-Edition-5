/*************************************************************************
	> File Name: p106.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 08:08:52 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int *e = &a[7];
    for(int *b = a; b != e; ++b)
        cout<<*b<<" ";
    cout<<endl;



    int *beg = begin(a);
    int *last = end(a);
    for(; beg != last; ++beg)
        cout<<*beg<<" ";
    cout<<endl;

    for(auto i : a)
        cout<<i<<" ";
    cout<<endl;
    return 0;
    
}

