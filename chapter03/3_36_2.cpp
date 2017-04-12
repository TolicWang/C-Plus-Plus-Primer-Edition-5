/*************************************************************************
	> File Name: 3_36_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 09:20:24 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<random>
using namespace std;
int main()
{
    random_device rd;
    vector<int> ivecone,ivectwo;
    for(int i = 0,temp; i < 10; ++i)
    {
        temp = rd() % 100;
        ivecone.push_back(temp);
        ivectwo.push_back(temp);
    }
    for(auto i : ivecone)
        cout<<i<<" ";
    cout<<endl;
    for(auto i : ivectwo)
        cout<<i<<" ";
    cout<<endl;
    for(auto it_one = ivecone.begin(),it_two = ivectwo.begin();
        it_one != ivecone.end() && it_two != ivectwo.end();
        ++it_one,++it_two)
    {
        if(*it_one != *it_two)
        {
            cout<<"not equal!"<<endl;
            return 0;
        }
    }
    cout<<"equal"<<endl;
    return 0;
}

