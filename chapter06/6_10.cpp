/*************************************************************************
	> File Name: 6_10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月14日 星期日 15时06分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
void swap(int &a,int &b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        swap(x,y);
        cout<<"by reference: x = "<<x<<"  y = "<<y<<endl;
        swap(&x,&y);
        cout<<"by pointer: x = "<<x<<"  y = "<<y<<endl;
    }
    return 0;
}
