/*************************************************************************
	> File Name: 6_11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月14日 星期日 16时39分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
void reset(int &i)
{
    i = 0;
}
int main()
{
    int n;
    while(cin>>n)
    {
        reset(n);
        cout<<"n = "<<n<<endl;
    }
    return 0;
}
