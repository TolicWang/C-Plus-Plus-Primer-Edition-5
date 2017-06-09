/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月01日 星期四 09时10分35秒
 ************************************************************************/

#include<iostream>
#include"sale_data.h"
int main()
{
    Sales_data s1;
    Sales_data s2("0002");
    Sales_data s3("0003",23,23);
    Sales_data s4(cin);
    print(std::cout,s1);
    std::cout<<std::endl;
    print(std::cout,s2);
    std::cout<<std::endl;
    print(std::cout,s3);
    std::cout<<std::endl;
    print(std::cout,s4);
    std::cout<<std::endl;
    

}

