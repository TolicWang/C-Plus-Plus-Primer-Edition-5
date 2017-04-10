/*************************************************************************
    > File Name: 2_10.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Sat 01 Apr 2017 04:30:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
string global_str;
int global_int;
int main()
{
	int local_int;
	string local_str;
	cout<<global_str<<"."<<global_int<<
		" "<<local_str<<"."<<local_int<<endl;

	return 0;
}
