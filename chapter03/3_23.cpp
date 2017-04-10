/*************************************************************************
	> File Name: 3_23.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 07:18:58 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec;
    for(int i = 0; i < 10; ++i)
    {
        ivec.push_back(i*i+3);
        cout<<i*i+3<<" ";
    }
    cout<<endl;
    for(auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it = (*it) * 2;
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}

