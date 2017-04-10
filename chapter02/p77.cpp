/*************************************************************************
	> File Name: p77.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 02 Apr 2017 02:17:13 PM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string c("wangcheng");
    char b = c[4];
    char &a = c[4];
    printf("%d,%d",b,a);
    return 0;
    
}
