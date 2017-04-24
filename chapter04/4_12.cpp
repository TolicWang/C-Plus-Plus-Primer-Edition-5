/*************************************************************************
	> File Name: 4_12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年04月24日 星期一 18时06分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
/* '<' 的优先级大于 '!='
 * 所以，先计算 j < k, 再计算 i != j < k
 */
int main()
{
    int i = 2,j = 3, k = 4;
    if(i != j < k)
        cout<<"true!"<<endl;// j < k ，即 3 < 4；结果为0
    else//                      i != 0，即2 != 0; 结果为1
        cout<<"false!"<<endl;
    return 0;
}
