#ifndef GAME_H_
#define GAME_H_
#include <ncurses.h>
class Layout{
    WINDOW* gameWindow;
    unsigned int row = 0;
    unsigned int col = 0;
    unsigned int startY=0;
    unsigned int startX=0;

    char keyPressed;

    public:
        Layout();
        ~Layout();
        WINDOW* createWindow(int height, int width, int starty, int startx); 
        void Draw();
        void userInput();
        

};

#endif
