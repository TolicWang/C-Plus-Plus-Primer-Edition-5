/*************************************************************************
	> File Name: 5_10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 15时19分38秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string text;
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0,uCnt = 0;
    while(cin>>text)
    {
        for(string::const_iterator it = text.begin();
           it != text.end(); ++it)
        {
            switch(*it)
            {
                case 'a':
                case 'A': ++aCnt; break;
                case 'e':
                case 'E': ++eCnt; break;
                case 'i':
                case 'I': ++iCnt; break;
                case 'o':
                case 'O': ++oCnt; break;
                case 'u':
                case 'U': ++uCnt; break;
                default: break;
            }
        }
        cout<<"Number of voewl a:\t"<<aCnt<<endl
            <<"Number of voewl e:\t"<<eCnt<<endl
            <<"Number of voewl i:\t"<<iCnt<<endl
            <<"Number of voewl o:\t"<<oCnt<<endl
            <<"Number of voewl u:\t"<<uCnt<<endl;

    }
    return 0;
}

