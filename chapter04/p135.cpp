/*************************************************************************
	> File Name: p135.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 16时27分51秒
 ************************************************************************/

#include<iostream>
#include<random>
using namespace std;
int main()
{
    random_device rd;
    int grade = rd() % 100;
    cout<<grade<<endl;
    cout<<((grade < 60) ? "fail" : "pass")<<endl;
    cout<<(grade < 60) ? "fail" : "pass";
    //cout<<grade < 60 ? "fail" : "pass"<<endl;
    return 0;
}

