/*************************************************************************
	> File Name: 6_28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 19时27分53秒
 ************************************************************************/

#include<iostream>
#include<initializer_list>
using namespace std;
void error_msg(initializer_list<string> il)
{
    for(auto &elem : il)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}
int main()
{
    error_msg({"hello","world"});
    return 0;

}

