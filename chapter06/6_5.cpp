/*************************************************************************
	> File Name: 6_5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月14日 星期日 14时29分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
int sign(double x)
{
    return x > 0 ? 1 : -1;
}
int main()
{
    double x;
    while(cin>>x)
        cout<<x*sign(x)<<endl;
    return 0;

}

