/*************************************************************************
    > File Name: 1_10.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Tue 28 Mar 2017 07:26:39 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int begin,end;
	std::cout<<"begin: "<<std::endl;
	std::cin>>begin;
	std::cout<<"end: "<<std::endl;
	std::cin>>end;
	while(begin < end)
	{
		cout<<begin++<<" ";
	}
	std::cout<<std::endl;
	return 0;
}

