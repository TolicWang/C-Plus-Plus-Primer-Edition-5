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
using namespace std;
struct Person
{
    string name;
    string address;

    string getName() const{return this->name;}
    string getAddress()const{return this->address;}
    
    Person():name("NULL"),address("NULL"){}
    Person(const std::string n, const std::string a) : name(n),address(a){}
    Person(const std::string n):name(n),address("NULL"){}
};
std::istream &read(std::istream&,Person &);
std::ostream &print(std::ostream&,const Person&);
#endif
