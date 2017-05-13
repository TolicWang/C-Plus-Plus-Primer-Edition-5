/*************************************************************************
	> File Name: 4_22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 16时50分53秒
 ************************************************************************/

#include<iostream>
#include<random>
#include<vector>
using namespace std;
int main()
{
    random_device rd;
    int grade;
    vector<int> ivec;
    for(int i = 0; i < 10; ++i)
    {
        grade = rd() % 100;
        ivec.push_back(grade);
        cout<<grade<<" ";
    }
    cout<<endl;

    /* method 1:-----------------------------------------*/
    for(auto i : ivec)
    cout<<i<<": "<<((i > 90) ? "high pass" : 
     ((i > 75) ? "low pass" :
      ((i > 60) ? "pass" : "fail")))<<endl;
    /*-----------------------------------------*/
    
    cout<<endl;
    //method 2:
    for(vector<int>::iterator it = ivec.begin();
       it != ivec.end();)
    {
        if(*it > 90 )
            cout<<*it++<<": high pass"<<endl;
        else if( *it > 75 )
            cout<<*it++<<": low pass"<<endl;
        else if( *it > 60 )
            cout<<*it++<<": pass"<<endl;
        else 
            cout<<*it++<<": fail"<<endl;
    }
    return 0;
}

