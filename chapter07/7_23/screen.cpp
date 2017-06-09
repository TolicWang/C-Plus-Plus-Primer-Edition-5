#include "screen.h"

inline
Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}
char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

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
