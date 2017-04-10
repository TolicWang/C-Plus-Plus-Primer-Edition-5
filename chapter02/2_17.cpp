/*************************************************************************
    > File Name: 2_17.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Sat 01 Apr 2017 05:53:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int i, &ri = i;
	i = 5; 
	ri = 10;
	cout<<i<<" "<<ri<<endl;
    return 0;
}
