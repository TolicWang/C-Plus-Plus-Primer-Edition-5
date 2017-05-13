/*************************************************************************
	> File Name: 4_23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 18时01分10秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "word";
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
    cout<<p1<<endl;
    return 0;
}

