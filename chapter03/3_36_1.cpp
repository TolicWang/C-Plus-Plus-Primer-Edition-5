/*************************************************************************
	> File Name: 3_36_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 09:12:02 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<random>
using namespace std;
int main()
{
    int arrone[10];
    int arrtwo[10];
    random_device rd;
    for(int i = 0; i < 10; ++i)
    {
        arrone[i] = rd() % 100;
        arrtwo[i] = rd() % 100;
    }
    for(auto i : arrone)
        cout<<i<<" ";
    cout<<endl;
    for(auto i : arrtwo)
        cout<<i<<" ";
    cout<<endl;

    for(int i = 0; i < 10; ++i)
    {
        if(arrone[i] != arrtwo[i])
        {
            cout<<"not equal!"<<endl;
            return 0;
        }
    }
    cout<<"equal!"<<endl;
    return 0;
    
}


