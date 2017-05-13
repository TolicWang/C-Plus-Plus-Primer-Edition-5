/*************************************************************************
	> File Name: 4_21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 16时33分46秒
 ************************************************************************/

#include<iostream>
#include<random>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec;
    random_device rd;
    int temp;
    for(int i = 0; i < 10; ++i)
    {
        temp = rd() % 100;
        ivec.push_back(temp);
        cout<<temp<<" ";
    }
    cout<<endl;
    for(auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        ((*it % 2) ? *it *= 2 : *it *= 1);
    }
    for(auto i : ivec)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}

