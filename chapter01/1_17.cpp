/*************************************************************************
    > File Name: p17.cpp
    > Author: Tolic
    > Mail: mr_king1994@163.com 
    > Created Time: Tue 28 Mar 2017 07:44:37 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int currVal = 0, val =0;
	if(std::cin>>currVal)
	{
		int cnt = 1;
		while(std::cin>>val)
			if(val == currVal)
				++cnt;
			else
			{
				std::cout<<currVal<<" occurs "<<cnt<<" times"<<std::endl;
				currVal = val;
				cnt = 1;
			}
		std::cout<<currVal<<" occurs "<<cnt<<" times"<<std::endl;
	}
    return 0;
}
