/*************************************************************************
	> File Name: return_iterator.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 15时34分27秒
 ************************************************************************/

//    原来迭代器也可以作为一种类型

#include<iostream>
#include<vector>
using namespace std;
vector<int>::iterator change_val(int x, 
                                 vector<int>::iterator beg,
                                 vector<int>::iterator end)
{
    for(;beg != end; ++beg)
    {
        if(x == *beg)
        {
            *beg = 0;
            return beg;
        }
    }
    return end;
}
int main()
{
    vector<int> ivec{1,2,3,4,5,6};
    cout<<*change_val(3,ivec.begin(),ivec.end())<<endl;
    return 0;
}
