/*************************************************************************
	> File Name: p85_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 12:07:59 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    const string hexdigits("0123456789ABCDEF");
    cout<<" Enter a series of numbers between 0 and 15 \n separated by space. Hit Enter when finished:\n";
    string result;
    string::size_type n;
    while(cin >> n)
    {
        if(n < hexdigits.size())
        cout<<hexdigits[n]<<endl;
    }
    return 0;
}

