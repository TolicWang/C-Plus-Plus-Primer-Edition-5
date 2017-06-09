/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年06月01日 星期四 10时35分13秒
 ************************************************************************/

#include<iostream>
using namespace std;
class test
{
    int value ;
public:
    test(int v =0){value = v;}
    int getValue() const 
    {
        return this->value;
    }
};
int main()
{
    test t(1);
    cout<<t.getValue()<<endl;
    return 0;
}

