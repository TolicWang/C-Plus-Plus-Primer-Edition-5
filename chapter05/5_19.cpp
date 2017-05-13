/*************************************************************************
	> File Name: 5_19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 18时36分37秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"type 2 strings respectively:\n";
    cin>>str1>>str2;
    do
    {
        str1.size() < str2.size() ? cout<<str1 : cout<<str2;
        cout<<endl<<endl;
    }while(cin>>str1>>str2);
    return 0;
}

