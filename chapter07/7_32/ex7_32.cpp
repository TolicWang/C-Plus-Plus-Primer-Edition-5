#include "ex7_32.h"

Window_mgr::Window_mgr(int n)
{
    Screen scrs;

    for(int i = 1; i < n; ++i)
    {
        scrs = Screen(pos(i),pos(2*i),'A');
        screens.push_back(scrs);
    }

}

void Window_mgr::display(ScreenIndex i)
{
    screens[i].display(std::cout);
}

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width,' ');
}


