/*************************************************************************
	> File Name: Person.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月09日 星期五 10时50分48秒
 ************************************************************************/

#include<iostream>
#include"Person.h"
std::istream &read(std::istream &is,Person &item)
{
    is>>item.name>>item.address;
    return is;
}
std::ostream &print(std::ostream &os,const Person &item)
{

    os<<item.getName()<<"   "<<item.getAddress();
    return os;
}
Person &Person::test(const std::string t)
{
    name += t;
    return *this;
}
