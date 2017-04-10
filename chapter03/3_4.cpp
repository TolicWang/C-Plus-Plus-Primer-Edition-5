/*************************************************************************
	> File Name: 3_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 02 Apr 2017 03:52:51 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1, str2;
    while(true)
    {
        cin>>str1>>str2;
        if(str1 != str2)
        {
           string biggest = str1 > str2 ? str1 : str2;
            string longest = str1.size() > str2.size() ? str1 : str2;
            cout<<"The biggest one is:"<<biggest<<endl;
            cout<<"The longest one is:"<<longest<<endl;
        }
    }
    return 0;
}
