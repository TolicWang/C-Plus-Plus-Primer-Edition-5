/*************************************************************************
	> File Name: 6_27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 19时22分38秒
 ************************************************************************/

#include<iostream>
#include<initializer_list>
using namespace std;
int sum(initializer_list<int> il)
{
    int sum = 0;
    for(const auto i : il)
        sum += i;
    return sum;
}
int main()
{
    cout<<sum({1,2,3,4,5,6})<<endl;
    return 0;
}

