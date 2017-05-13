/*************************************************************************
	> File Name: 4_11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月24日 星期一 16时42分57秒
 ************************************************************************/

#include<iostream>
#include<random>
using namespace std;
int main()
{
    random_device rd;
    int a = rd() % 100;
    int b = rd() % 100;
    int c = rd() % 100;
    int d = rd() % 100;
    cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<" d = "<<d<<endl;
    if(a>b && b > c && c > d)
        cout<<"True!"<<endl;
    else
        cout<<"Faule!"<<endl;
    return 0;
}

