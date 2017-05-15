/*************************************************************************
	> File Name: charToString.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 17时47分59秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a[15] = "hello world!";
    string str;
    str = string(a);
    cout<<str<<endl;
    return 0;

}
