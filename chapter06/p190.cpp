/*************************************************************************
	> File Name: p190.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月14日 星期日 15时53分44秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;
}
int main()
{
    string str;
    string::size_type ctr,index;
    while(cin>>str)
    {
        index = find_char(str,'o',ctr);
        cout<<"index: "<<index<<" occurs:"<<ctr<<endl;
        
    }
    return 0;
}

