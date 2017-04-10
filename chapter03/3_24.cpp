/*************************************************************************
	> File Name: 3_24.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 08:26:47 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec;
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)// input num by function i*i-5
    {
        ivec.push_back(i * i - 5);
        cout<<i * i - 5<<" ";
    }
    cout<<endl<<endl;
    for(auto it = ivec.cbegin(); it != ivec.cend() - 1;) 
    {
        cout<<(*it) + (*(++it))<<" ";
    }
    cout<<endl<<endl;

    for(auto it_beg = ivec.cbegin(), it_end = ivec.cend() - 1; ; ++it_beg, --it_end)
    {
        if(it_beg < it_end)
            cout<<*it_beg + *it_end<<" ";
        else if(it_beg == it_end)
            cout<<*it_beg + *it_end<<" ";
        else 
            break;
    }
    cout<<endl;
    
    return 0;
}

