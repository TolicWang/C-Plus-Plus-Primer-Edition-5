/*************************************************************************
	> File Name: 3_40.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 09:53:17 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[] = "hello";
    char s2[] = "world";
    char s3[20];
    strcat(s1,s2);
    strcpy(s3,s1);
    cout<<s3<<endl;
    return 0;
}
