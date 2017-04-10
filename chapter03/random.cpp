/*************************************************************************
	> File Name: random.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 11:19:19 PM CST
 ************************************************************************/

#include<iostream>
#include<random>
using namespace std;
int main()
{
    default_random_engine e;
    for(int i = 0; i < 10; ++i)
        cout<<e() % 100<<" ";
    cout<<endl;
    return 0;
    
}

