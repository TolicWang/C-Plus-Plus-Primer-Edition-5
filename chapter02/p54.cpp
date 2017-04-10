/*************************************************************************
    > File Name: p54.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Sun 02 Apr 2017 10:04:23 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	const int &r1 = 43;
	const int &r4 = r1 * 9;
	cout<<r4<<endl;
    return 0;
}
