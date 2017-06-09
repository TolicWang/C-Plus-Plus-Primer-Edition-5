/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月09日 星期五 11时02分17秒
 ************************************************************************/

#include<iostream>
#include"Person.h"
int main()
{
    Person p1;
    print(cout,p1)<<std::endl;
    Person p2("zhang");
    print(cout,p2)<<std::endl;
    Person p3("zhang","Beijing");
    print(cout,p3)<<std::endl;
}
