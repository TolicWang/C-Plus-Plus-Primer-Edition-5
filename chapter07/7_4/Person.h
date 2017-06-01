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
};
#endif
