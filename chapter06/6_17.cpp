/*************************************************************************
	> File Name: 6_17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月15日 星期一 15时13分44秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool haveUpper(const string &str)
{
    for(string::const_iterator it = str.begin();
       it != str.end();
       ++it)
    {
        if(isupper(*it))
            return true;
    }
    return false;
}
void toAllLower(string & str)
{
    for(auto &c : str)
        c = tolower(c);
}

int main()
{
    string s;
    while(cin>>s)
    {
        if(haveUpper(s))
        {
            cout<<"yes\n";
            toAllLower(s);
        }
        else
            cout<<"no\n";
        cout<<s<<endl<<endl;
    }
    return 0;
}

