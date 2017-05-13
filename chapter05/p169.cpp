/*************************************************************************
	> File Name: p169.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 18时32分08秒
 ************************************************************************/

#include<iostream>
#include<random>
#include<vector>
using namespace std;
int main()
{
    random_device rd;
    unsigned temp;
    vector<int> ivec;
    for(int i = 0; i < 10; ++i)
    {
        temp = rd()%100;
        ivec.push_back(temp);
        cout<<temp<<" ";
    }
    cout<<endl;
    for(auto it = ivec.begin(); it != ivec.end(); ++it)
        *it *= 2;
    for(auto i : ivec)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}

