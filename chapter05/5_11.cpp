/*************************************************************************
	> File Name: 5_11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 15时38分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
int
main ()
{
  unsigned aCnt = 0,
    eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, enter = 0, tab = 0, space = 0;
  char ch;

    while (cin >> std::noskipws >> ch)
//在cin的缺省情况下，输入的所有空白字符都被抛弃掉。如果我们希望读入空白字符，或许是为了保留原始的输入格式，或许是为了处理空白字符（比如计算换行符的个数）。有两种解决方法：第一种方法是使用istream的get()成员函数（ostream的put()成员函数一般与get配合使用）；第二种方法是使用noskipws操作符。
    {
      switch (ch)
	{
	case 'a':
	case 'A':
	  ++aCnt;
	  break;
	case 'e':
	case 'E':
	  ++eCnt;
	  break;
	case 'i':
	case 'I':
	  ++iCnt;
	  break;
	case 'o':
	case 'O':
	  ++oCnt;
	  break;
	case 'u':
	case 'U':
	  ++uCnt;
	  break;
	case ' ':
	  ++space;
	  break;
	case '\t':
	  ++tab;
	  break;
	case '\n':
	  ++enter;
	  break;
	default:
	  break;
	}
    }
  cout << "Number of voewl a:\t" << aCnt << endl
    << "Number of voewl e:\t" << eCnt << endl
    << "Number of voewl i:\t" << iCnt << endl
    << "Number of voewl o:\t" << oCnt << endl
    << "Number of voewl u:\t" << uCnt << endl
    << "Number of space:\t" << space << endl
    << "Number of tab:\t" << tab << endl
    << "Number of enter:\t" << enter << endl;

  return 0;
}
