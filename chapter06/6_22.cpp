/*************************************************************************
	> File Name: 6_22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 16时22分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
void swap( int **p1, int **p2)
{
    int *temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
int main()
{
    int a = 1, b = 2;
    int *q1 = &a, *q2 = &b;
    swap(&q1,&q2);
    cout<<*q1<<"  "<<*q2<<endl;
    return 0;
}
