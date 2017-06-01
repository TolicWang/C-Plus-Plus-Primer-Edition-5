/*************************************************************************
	> File Name: sale_data.h
	> Author: 
	> Mail: 
	> Created Time: 2017年06月01日 星期四 08时49分10秒
 ************************************************************************/

#ifndef _SALE_DATA_H
#define _SALE_DATA_H
#include<string>
#include<iostream>
using namespace std;
struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    
    const string& isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};
#endif
