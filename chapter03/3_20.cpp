/*************************************************************************
	> File Name: 3_20.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 06 Apr 2017 06:59:38 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec;
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)//input by function i*i-5
    {
        ivec.push_back(i * i - 5);
        cout<<i * i -5<<" ";
    }
    cout<<endl;
    for(decltype(ivec.size()) i = 0; i < ivec.size() - 1;)
    {
        cout<<ivec[i] + ivec[++i]<<" ";
    }
    cout<<endl;


    vector<int>::size_type size = ivec.size(), mid;
    if(size%2)
        mid = size / 2 + 1;
    else
        mid = size / 2;
    
    for(vector<int>::size_type i = 0,j = ivec.size() - 1; i < mid; )
        cout<<ivec[i++] + ivec[j--] <<" ";
    cout<<endl;
    return 0;
}

