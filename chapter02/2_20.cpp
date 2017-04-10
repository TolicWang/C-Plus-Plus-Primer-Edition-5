/*************************************************************************
    > File Name: 2_20.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Sun 02 Apr 2017 09:35:47 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int i =42;
	int *p1 = &i;
	*p1 = *p1 * *p1;
	cout<<*p1<<endl;
    return 0;
}
