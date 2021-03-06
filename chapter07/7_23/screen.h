#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
class Screen
{
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
    inline char get(pos r,pos c)const;
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


#endif // SCREEN_H
