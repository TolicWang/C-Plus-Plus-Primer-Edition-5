#include"ex7_32.h"
#include<iostream>

int main()
{
    Window_mgr win_mgr(5);
    for(auto i = 1; i < win_mgr.getLen(); ++i)
    {
        win_mgr.display(i);
        std::cout<<std::endl;
    }

    for(auto i = 1; i < win_mgr.getLen(); ++i)
        win_mgr.clear(i);

    for(auto i = 1; i < win_mgr.getLen(); ++i)
    {
        win_mgr.display(i);
        std::cout<<std::endl;
    }
    return 0;
}
