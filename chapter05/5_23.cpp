/*************************************************************************
	> File Name: 5_23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月14日 星期日 13时53分37秒
 ************************************************************************/

#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    double a,b,c;
    while(cin>>a>>b)
    {
        try
        {
            if(b==0)
                throw runtime_error("0 cannot be used as the second parameter!");
            cout<<"a/b = "<<a/b<<endl;
        }
        catch(runtime_error err)
        {
            cout<<err.what()
                <<"\nTry Again? Enter y or n"<<endl;
            char c;
            cin>>c;
            if(!cin || c == 'n')
            break;
        }
    }
    return 0;
}
