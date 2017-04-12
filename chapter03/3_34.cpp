/*************************************************************************
	> File Name: 3_34.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 08:53:24 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6};
    int *p1 = &arr[3];
    int *p2 = &arr[3];
    p1 =p1 + (p2 - p1);
    cout<<*p1<<endl;
    return 0;
}

