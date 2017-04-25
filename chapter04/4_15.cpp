/*************************************************************************
	> File Name: 4_15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 15时35分27秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    double dval; int ival; int *pi;
    pi = new int; 
    dval = ival = *pi = 0;
    cout<<"dval = "<<dval<<"; ival = "<<ival<<"; *pi = "<<*pi<<endl;
    delete pi;
    return 0;
}
