/*************************************************************************
	> File Name: 6_25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 17时09分24秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
    string str;
    for(int i = 1; i < argc; ++i)
        str += (argv[i]);
    cout<<str<<endl;
    return 0;
}
