/*************************************************************************
	> File Name: 4_6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月24日 星期一 16时09分10秒
 ************************************************************************/

#include<iostream>
#include<random>
using namespace std;
int main()
{
    random_device rd;
    int temp = 0;
    while(cin>>temp)
    {
        temp = rd() % 100;
        if(temp %2 == 0)
            cout<<temp<<" is even number!"<<endl;
        else
            cout<<temp<<" is odd number!"<<endl;
        cout<<"Please type any number to continue!"<<endl;
        
    }
    return 0;
}

