/*************************************************************************
	> File Name: 5_20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 19时00分34秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,preStr;
    bool isRepeatation = false;
    while(cin>>str)
    {
       if(str == preStr) 
        {
            isRepeatation = true;
            break;
        }
        else
            preStr = str;
    }
    if(isRepeatation)
        cout<<endl<<str<<endl;
    else
        cout<<"\nThere is no repeatation!"<<endl;
    return 0;
}

