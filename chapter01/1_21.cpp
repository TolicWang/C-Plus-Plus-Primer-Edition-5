/*************************************************************************
    > File Name: 1_21.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Tue 28 Mar 2017 08:22:59 PM CST
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item item1,item2;
	std::cin>>item1>>item2;
	if(item1.isbn() == item2.isbn())
	{
		std::cout<<item1 + item2<<std::endl;
		return 0;
	}
	else
	{
		std::cerr<<"Data must refer to same ISBN:"<<std::endl;
		return -1;
	}
}
