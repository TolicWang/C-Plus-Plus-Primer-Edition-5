/*************************************************************************
	> File Name: 6_23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 16时47分12秒
 ************************************************************************/

#include<iostream>
#include<iterator>
using namespace std;
void print(const int i)
{
    cout<<i<<endl;
}
void print(const int *beg, const int *end)
{
    while(beg != end)
        cout<<*beg++<<" ";
    cout<<endl;
}
void print(const int ia[10])
{
    for(size_t i = 0; i != 10; ++i)
        cout<<ia[i]<<" ";
    cout<<endl;
}
int main()
{
    int i = 0;
    int j[2] = {0,1};
    int ia[] = {1,2,3,4,5,6,7,8,9,9};
    print(i);
    print(begin(j),end(j));
    print(ia);
    return 0;
}
