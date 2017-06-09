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
class Person
{
private:
    string name;
    string address;
    const string& getName() const{return this->name;}
    const string& getAddress()const{return this->address;}

public:
    Person():name("NULL"),address("NULL"){}//构造函数必须声明为公有成员，不然在其它地方定义变量时不能通过编译
    Person(const std::string n, const std::string a) : name(n),address(a){}
    Person(const std::string n):name(n),address("NULL"){}
    friend std::istream &read(std::istream&,Person &);
    friend std::ostream &print(std::ostream&,const Person&);
};
std::istream &read(std::istream&,Person &);
std::ostream &print(std::ostream&,const Person&);
#endif
