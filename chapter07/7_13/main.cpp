/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月09日 星期五 10时10分24秒
 ************************************************************************/

#include<iostream>
#include"sale_data.h"
int main()
{
    Sales_data total(std::cin);
    if(!total.isbn().empty())
    {
        while(1)
        {
            Sales_data trans(std::cin);
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout,total)<<std::endl;
                total = trans;
            }
        }
        print(cout,total)<<std::endl;
    }
    else
        std::cerr<<"No data!"<<std::endl;

}
