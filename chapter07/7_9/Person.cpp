/*************************************************************************
	> File Name: Person.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月09日 星期五 08时47分26秒
 ************************************************************************/

#include<iostream>
#include"Person.h"
void read(std::istream &is, Person &item)
{
    is>>item.name>>item.address;
}
std::ostream &print(std::ostream &os, const Person &item)
{
    os<<"Name: "<<item.getName()<<" Address: "<<item.getAddress();
    return os;
}

