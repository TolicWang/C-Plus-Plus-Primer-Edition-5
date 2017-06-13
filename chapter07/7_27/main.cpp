#include"screen.h"
#include<iostream>
int main()
{
    typedef std::string::size_type pos;
    Screen myScreen(5,3,'X');
    myScreen.move(pos(4),pos(0)).set('#').display(std::cout);
    std::cout<<std::endl;
    myScreen.display(std::cout);
    std::cout<<std::endl;
    myScreen.set('P').display(std::cout);
    std::cout<<std::endl;
    return 0;
}
