/*************************************************************************
	> File Name: 3_41.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Apr 2017 08:48:04 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> ivec(begin(array),end(array));
    for(auto i : ivec)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}

