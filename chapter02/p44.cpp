/*************************************************************************
    > File Name: p44.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Sat 01 Apr 2017 05:33:02 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int reused = 42;
int main()
{
	int unique = 0;
	cout<<reused<<" "<<unique<<endl;
	int reused = 0;
	cout<<reused<<" "<<unique<<endl;
	cout<<::reused<<" "<<unique<<endl;
    return 0;
}
