#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H
#include"screen.h"
#include<vector>
class Window_mgr
{
private:
    std::vector<Screen> screens{Screen(24,80,'')};
public:
    Window_mgr();
};

#endif // WINDOW_MGR_H
