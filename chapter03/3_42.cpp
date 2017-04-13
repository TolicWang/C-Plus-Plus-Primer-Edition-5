/*************************************************************************
	> File Name: 3_42.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Apr 2017 08:53:21 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<random>
using namespace std;
int main()
{
    random_device rd;
    vector<int> ivec;
    int array[10];
    int *beg = begin(array);
    int *last = end(array);
    for(int i = 0,temp; i < 10; ++i)
    {
        temp = rd() % 100;
        ivec.push_back(temp);
        cout<<temp<<" ";
    }
    cout<<endl<<endl;
    for(auto i : ivec)
    {
        *beg = i;
        ++beg;
    }
    for(auto i : array)
        cout<<i<<" ";
    cout<<endl;
        
        
    return 0;
}

