/*************************************************************************
    > File Name: 1_25.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Tue 28 Mar 2017 08:49:19 PM CST
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item currItem,varItem;
	if(std::cin>>currItem)
	{
		Sales_item total = currItem;
		while(std::cin>>varItem)
		{
			if(currItem.isbn() == varItem.isbn())
				total += varItem;
			else
			{
				std::cout<<total<<std::endl;
				total = varItem;
				currItem = varItem;
			}
		}
				std::cout<<total<<std::endl;
	}




    return 0;
}
