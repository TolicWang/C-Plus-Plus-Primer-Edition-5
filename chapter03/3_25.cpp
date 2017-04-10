/*************************************************************************
	> File Name: 3_25.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 11:22:30 PM CST
 ************************************************************************/

#include<iostream>
#include<random>
#include<vector>
using namespace std;
int main()
{
    default_random_engine e;
    vector<int> ivec(11,0);
    int n,score,step;
    auto begin = ivec.begin();
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        score = e() % 101;//input n score by default_random_engine;    
        cout<<score<<" ";
        step = score / 10;
        ++(*(begin + step));
    }
    cout<<endl;
    int i = 1;
    for(auto it = ivec.begin(); it != ivec.end() - 1; ++it,++i)
    {
        cout<<"less than  "<<i * 10<<":  "<<*it<<endl;
    }
    cout<<"equal to   100:  "<<*(ivec.end() - 1)<<endl;
    return 0;
}

