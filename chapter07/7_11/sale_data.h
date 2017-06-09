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
    string bookNo = "NULL";
    unsigned units_sold = 0;
    double revenue = 0.0;
    
    const string& isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    Sales_data(const std::string &s):bookNo(s){}
    Sales_data(const std::string &s, unsigned u, double r):
    bookNo(s), units_sold(u), revenue(r){}
    Sales_data(std::istream &);
    Sales_data() = default;
};
Sales_data add(const Sales_data&,const Sales_data&);
ostream &print(ostream&,const Sales_data &teim);
istream &read(istream&,Sales_data &item);
#endif
