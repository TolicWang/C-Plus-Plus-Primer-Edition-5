/*************************************************************************
	> File Name: 3_35.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 09:05:41 PM CST
 ************************************************************************/

#include<iostream>
#include<random>
using namespace std;
int main()
{
    int arr[10];
    int *beg = begin(arr);
    int *last = end(arr);
    random_device rd;
    for(; beg != last; ++beg)
        *beg = rd() % 100;

    for(auto i : arr)
        cout<<i<<" ";
    cout<<endl;

    for(beg = begin(arr); beg != last; ++beg)
        *beg = 0;

    for(auto i : arr)
        cout<<i<<" ";
    cout<<endl;
    return 0;

}
