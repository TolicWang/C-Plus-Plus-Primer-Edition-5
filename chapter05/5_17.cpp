/*************************************************************************
	> File Name: 5_17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 18时17分30秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec_1,ivec_2;
    unsigned length_1 = 0, length_2 = 0;
    unsigned temp; 
    cout<<"\ntype the length of vector one: ";
    cin>>length_1;
    for(int i = 0; i < length_1; ++i)
    {
        cin>>temp;
        ivec_1.push_back(temp);
    }
    cout<<"\ntype the length of vector two: ";
    cin>>length_2;
    for(int i = 0; i < length_2; ++i)
    {
        cin>>temp;
        ivec_2.push_back(temp);
    }
    unsigned len = length_1 < length_2 ? length_1 : length_2;
    for(auto v1 = ivec_1.begin(), v2 = ivec_2.begin(); len > 0; ++v1,++v2,--len)
    {
        if(*v1 != *v2)
        {
            cout<<"false!\n";
            return 0;
        }
    }
    cout<<"true!\n";
    return 0;
    
}


