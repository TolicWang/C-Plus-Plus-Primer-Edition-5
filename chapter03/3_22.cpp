/*************************************************************************
	> File Name: 3_22.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 06:52:21 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> vstr = {"i","love","you","forever","!"};
    for(auto it = vstr.begin();
       it != vstr.end();
       ++it)
        {
            for(auto &vs : (*it))
                vs = toupper(vs);
            cout<<*it<<" ";
        }
    cout<<endl;
    return 0;
}
