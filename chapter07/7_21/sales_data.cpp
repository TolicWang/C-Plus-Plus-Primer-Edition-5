#include "sales_data.h"
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    this->revenue += rhs.revenue;
    this->units_sold += rhs.units_sold;
    return *this;
}
Sales_data::Sales_data(std::istream &)
{
    read(std::cin,*this);
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    return sum.combine(rhs);
}

std::ostream& print(std::ostream &os, const Sales_data &item)
{
    os<<"ISBN: "<<item.isbn()<<" units_sold "<<
        item.units_sold<<" revenue: "<<item.revenue<<" avg: "<<item.avg_price();
    return os;
}

std::istream& read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue = item.units_sold * price;
    return is;
}
