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
    Person p1("zhang","Beijing");
    print(cout,p1)<<std::endl;
    Person p2 = p1.test("test");
    print(cout,p1)<<std::endl;
    print(cout,p2)<<std::endl;
    

}
