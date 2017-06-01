/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月01日 星期四 09时10分35秒
 ************************************************************************/

#include<iostream>
#include"sale_data.h"
using namespace std;
int main()
{
    Sales_data sale1,sale2;
    cin>>sale1.bookNo>>sale1.units_sold;
    cin>>sale2.bookNo>>sale2.units_sold;
    cout<<sale1.isbn()<<"  "<<sale1.units_sold<<endl;
    cout<<sale2.isbn()<<"  "<<sale2.units_sold<<endl;
    sale1.combine(sale2);
    cout<<sale1.isbn()<<"  "<<sale1.units_sold<<endl;
    return 0;
}

