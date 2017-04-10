/*************************************************************************
	> File Name: 3_17.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 06 Apr 2017 05:53:11 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;
    vector<string> vstr;
    while(cin>>str)
        vstr.push_back(str);

    //method 1:
    /*for(auto &v : vstr)
        for(auto &vs : v)
            vs = toupper(vs);*/

    //method 2:
    for(vector<string>::size_type i = 0; i < vstr.size(); ++i)
    for(string::size_type j = 0; j < vstr[i].size(); ++j)
    vstr[i][j] = toupper(vstr[i][j]);
     
    for(auto v : vstr)
    cout<<v<<endl;
    return 0;
}
    
