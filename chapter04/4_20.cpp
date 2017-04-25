/*************************************************************************
	> File Name: 4_20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 16时07分26秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> vstr;
    vstr = {"" ,"i","love","you","forever","!"};
    vector<string>::iterator iter = vstr.begin();
    //cout<<*iter++<<endl;// 输出第一个元素，再向后移动一个
    //cout<<(*iter)++<<endl;//非法
    // *iter.empty();// 错误，iter 没有empty这个成员，应该是(*iter).empty()
    //iter->empty();
    //++*iter;
    if(iter++->empty())//判断第一个元素是否为空
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}

