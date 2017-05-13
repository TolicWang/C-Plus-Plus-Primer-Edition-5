/*************************************************************************
	> File Name: 5_14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 16时23分50秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> svec;
    string str,maxStr,tempStr;
    unsigned maxRepeatCnt = 1,temp = 1;
    while(cin>>str)
        svec.push_back(str);//type 'ctrl + d' to stop when running!
    tempStr = svec[0];
    for(decltype(svec.size()) i = 1; i < svec.size(); ++i)
    {
        if(tempStr == svec[i]) 
            ++temp;
        else
        {
            temp = 1;
            tempStr = svec[i];
        //    cout<<"tempStr = "<<tempStr<<endl;
        }
        if(temp > maxRepeatCnt)
        {
            maxRepeatCnt = temp;
            maxStr = tempStr;
        }

    }
    cout<<"Repeatation number of '"<<maxStr<<"' is:  "<<maxRepeatCnt<<endl;
    return 0;

}

