/*************************************************************************
	> File Name: sale_data.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月01日 星期四 08时54分24秒
 ************************************************************************/

#include<iostream>
#include"sale_data.h"
#include<string>
using namespace std;
Sales_data& Sales_data::combine( const Sales_data& rhs)
{
    if(isbn() == rhs.isbn())
    {
        this->units_sold += rhs.units_sold;
        this->revenue += rhs.revenue;
    }
    else 
    cout<<"Data must refer to same ISBN"<<endl;
    return *this;
}




