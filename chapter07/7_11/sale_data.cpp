/*************************************************************************
	> File Name: sale_data.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月09日 星期五 07时45分08秒
 ************************************************************************/

#include<iostream>
#include"sale_data.h"
using namespace std;
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    this->units_sold += rhs.units_sold;
    this->revenue += rhs.revenue;
    return *this;
}
double Sales_data::avg_price()const
{
    return revenue / units_sold;
}

Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
  Sales_data sum;
  sum = lhs;
  sum.combine(rhs);
  return sum;
}

Sales_data::Sales_data(std::istream &is)
{
    read(is,*this);
}
ostream &print(ostream& os,const Sales_data &item)
{
    os<<"bookNo: "<<item.isbn()<<" units_sold: "<<item.units_sold<<" revenue: "<<item.revenue<<" avg: "<<item.avg_price();
    return os;
}
istream &read(istream& is,Sales_data &item)
{
    double price = 0;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue = price * item.units_sold;
    return is;
}

