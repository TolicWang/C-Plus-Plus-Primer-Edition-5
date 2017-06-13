#ifndef EX7_32_H
#define EX7_32_H
#include<iostream>
#include<vector>

class Screen;
class Window_mgr
{

public:
    using ScreenIndex = std::vector<Screen>::size_type;
    using pos = std::string::size_type;
    Window_mgr() = default;
    Window_mgr(int n);
    void clear(ScreenIndex i);
    void display(ScreenIndex i);
    ScreenIndex getLen(){return screens.size();}

private:
    std::vector<Screen>screens;

};

class Screen
{
    friend void Window_mgr::clear(ScreenIndex i);

public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht,pos wd):
        height(ht),
        width(wd),
        contents(ht * wd,' '){}

    Screen(pos ht,pos wd,char c):
        height(ht),
        width(wd),
        contents(ht * wd,c){}

    char get()const{return contents[cursor];}
    char get(pos r,pos c)const;
    Screen &move(pos r, pos c);
    Screen &set(char c);
    Screen &set(pos r, pos c, char ch);

    Screen& display(std::ostream& os)
    {
        do_display(os);
        return *this;
    }

    const Screen& display(std::ostream &os)const
    {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    std::string  contents;

    void do_display(std::ostream& os)const {os<<contents;}

};



inline
Screen &Screen::set(char c)
{
    this->contents[this->cursor] = c;
    return *this;
}
inline
Screen &Screen::set(pos r, pos c, char ch)
{
    contents[r*width + c] = ch;
    return *this;
}
inline
Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}
inline
char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}
#endif // EX7_32_H
