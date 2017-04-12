/*************************************************************************
	> File Name: 3_32.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 07:52:49 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[10];
    for(int i = 0; i < 10; ++i)
        arr[i] = i;
    int arrcopy[10];
    for(int i = 0; i < 10; ++i)
        arrcopy[i] = arr[i];
    for(auto i : arrcopy)
        cout<<i<<" ";
    cout<<endl<<"****************"<<endl;
    
    vector<int> ivec;
    for(int i = 0; i < 10; ++i)
        ivec.push_back(i);
    vector<int> iveccopy;
    for(int i = 0; i < 10; ++i)
        iveccopy.push_back(ivec[i]);
    for(auto it = iveccopy.begin(); it != iveccopy.end(); ++it)
        cout<<*it<<" ";
    cout<<endl;
}

