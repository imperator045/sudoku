#ifndef WINDOW_H
#define WINDOW_H
#include "graphics.hpp"
#include "widget.hpp"
#include <vector>
#include <iostream>
#include "spinbox.hpp"
#include <functional>
const int sbutton=50;
const int xkezd=30;
const int ykezd=40;

class Widget;

class Window
{
public:
    int _sx, _sy;
    std::vector<Widget*> _widgets;
    bool helyes, jatek;
public:
    Window(int sx, int sy);
    void event_loop();
    void add_widget(Widget* w);
    void nyertel();
    bool jateke();
    void kezdes();

};

#endif // WINDOW_H
