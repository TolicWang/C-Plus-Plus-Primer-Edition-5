/*************************************************************************
	> File Name: BinarySearch.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 07:47:55 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec;
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        ivec.push_back(2 * i + 3);
        cout<<2 * i + 3<<" ";
    }
    cout<<endl<<"Pleasae type the number you wanna search: ";
    int sought;
    cin>>sought;
    auto beg = ivec.cbegin();
    auto end = ivec.cend();
    auto mid = beg + (end - beg) / 2;
    while(mid != end && *mid != sought)
    {
        if(sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
    if(*mid == sought)
        cout<<"the index of "<<sought<<" is "<<int(mid - ivec.cbegin())<<".(begin as 0)"<<endl;
    else
        cout<<"not found."<<endl;
    return 0;
}

