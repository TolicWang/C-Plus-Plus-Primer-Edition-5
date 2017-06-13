#include"screen.h"
#include<iostream>
int main()
{
    Screen myScreen(5,3);
    const Screen blank(5,3);
    myScreen.set(4,2,'#').display(std::cout);
    std::cout<<std::endl;
    blank.display(std::cout);
    std::cout<<std::endl;
    return 0;
}
