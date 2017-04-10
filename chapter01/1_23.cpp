/*************************************************************************
    > File Name: 1_23.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Tue 28 Mar 2017 08:39:27 PM CST
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item currItem,varItem;
	if(std::cin>>currItem)
	{
		int cnt = 1;
		while(std::cin>>varItem)
		{
			if(currItem.isbn() == varItem.isbn())
				++cnt;
			else
			{
				cout<<currItem<<" occurs "<<cnt<<" times."<<std::endl;
				cnt = 1;
				currItem = varItem;
			}

		}
		cout<<currItem<<" occurs "<<cnt<<" times."<<std::endl;
		
	}




    return 0;
}
