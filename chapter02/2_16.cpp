/*************************************************************************
    > File Name: 2_16.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Sat 01 Apr 2017 05:47:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	//cout<<"r2 = "<<r2<<"    "<<"d = "<<d<<endl;
	//r2 = r1;
	//cout<<"r2 = "<<r2<<"    "<<"d = "<<d<<endl;
	i = r2;
	cout<<"r1 = "<<r1<<"    "<<"i = "<<i<<endl;
    return 0;
}
