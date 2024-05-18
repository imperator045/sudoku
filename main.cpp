#include "widget.hpp"
#include "window.hpp"
#include "mywindow.hpp"

using namespace std;

int main()
{
    Window * w=new MyWindow(500, 500);
    //gout.open(400,400);
    //gout << font("LiberationSans-Regular.ttf",20);
    //gout <<text("hello world")<< refresh;
    //event ev;
    w->event_loop();
    /*while(gin >> ev) {
    }*/
    return 0;
}
