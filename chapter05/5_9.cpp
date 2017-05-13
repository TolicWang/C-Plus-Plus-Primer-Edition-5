/*************************************************************************
	> File Name: 5_9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 15时06分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while(cin>>ch)
    {
        if(ch - 'a' == 0)
        ++aCnt;
        else if(ch - 'e' == 0)
        ++eCnt;
        else if(ch - 'i' == 0)
        ++iCnt;
        else if(ch - 'o' == 0)
        ++oCnt;
        else if(ch - 'u' == 0)
        ++uCnt;
    }
    cout<<"Number of voewl a:\t"<<aCnt<<endl
        <<"Number of voewl e:\t"<<eCnt<<endl
        <<"Number of voewl i:\t"<<iCnt<<endl
        <<"Number of voewl o:\t"<<oCnt<<endl
        <<"Number of voewl u:\t"<<uCnt<<endl;
    return 0;
        
}

