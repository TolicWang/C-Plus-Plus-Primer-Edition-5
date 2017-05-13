/*************************************************************************
	> File Name: 5_12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 16时06分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    unsigned fCnt = 0, lCnt = 0, iCnt = 0;
    char ch1,ch2;
    cin>>ch1;
    while(cin>>ch2)
    {
        if(ch1 == 'f')
        {
            switch(ch2)
            {
                case 'f': ++fCnt; break;
                case 'l': ++lCnt; break;
                case 'i': ++iCnt; break;
                default: break;
            }
            if(ch2 == 'f' || ch2 == 'l' || ch2 == 'i')
                cin>>ch1;
        }
        else
        ch1 = ch2;
    }
    cout<<"Number of 'ff': "<<fCnt<<endl
        <<"Number of 'fl': "<<lCnt<<endl
        <<"Number of 'fi': "<<iCnt<<endl;
    return 0;
}
