/*************************************************************************
    > File Name: 1_15.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Tue 28 Mar 2017 07:34:31 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int sum = 0, value = 0;
	while(std::cin>>value)
		sum += value;
	std::cout<<"Sum is: "<<sum<<std::endl;
    return 0;
}
