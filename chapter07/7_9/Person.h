/*************************************************************************
	> File Name: Person.h
	> Author: 
	> Mail: 
	> Created Time: 2017年06月01日 星期四 09时47分07秒
 ************************************************************************/

#ifndef _PERSON_H
#define _PERSON_H
#include<iostream>
#include<string>
struct Person
{
    std::string name = "NULL";
    std::string address = "NULL";

    std::string getName() const{return this->name;}
    std::string getAddress()const{return this->address;}
};
void read(std::istream&,Person& );
std::ostream &print(std::ostream&,const Person&);
#endif
