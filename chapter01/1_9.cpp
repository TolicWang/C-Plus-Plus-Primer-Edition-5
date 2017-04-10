/*************************************************************************
    > File Name: 1_9.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Tue 28 Mar 2017 07:16:24 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int sum = 0, i = 1;
	while(i <= 100)
	{
		sum += i;
		++i;
	}
	std::cout<<"the sum of 50 to 100 inclusive is "<<sum<<std::endl;

    return 0;
}
