#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
class Sales_data
{


private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const {return units_sold ? revenue/units_sold : 0;}

public:
    Sales_data():bookNo("NULL"){}
    Sales_data(const std::string no,unsigned sold,double p)
        :bookNo(no),units_sold(sold),revenue(p * sold){}
    Sales_data(std::istream&);
    const std::string& isbn()const{return this->bookNo;}

    Sales_data& combine(const Sales_data &rhs);

    friend Sales_data add(const Sales_data& lhs,const Sales_data& rhs);
    friend std::ostream& print(std::ostream&,const Sales_data&);
    friend std::istream& read(std::istream&,Sales_data&);
};
Sales_data add(const Sales_data& lhs,const Sales_data& rhs);
std::ostream& print(std::ostream& os, const Sales_data& item);
std::istream& read(std::istream& is,Sales_data& item);
#endif // SALES_DATA_H
