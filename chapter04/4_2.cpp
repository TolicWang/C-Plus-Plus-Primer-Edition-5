/*************************************************************************
	> File Name: 4_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月24日 星期一 15时34分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int*> vec;
    int a[] = {1,2,3,4,5};
    auto last = end(a);
    auto beg = begin(a);
    for(; beg != last; ++beg)
        vec.push_back(beg);
    for(auto it = vec.begin(); it != vec.end(); ++it)
        cout<<**it<<" ";
    cout<<endl;


    cout<<*vec.begin()<<endl;
    cout<<*(vec.begin()) + 1 <<endl;
    return 0;
}

