#include "Game.h"

Layout::Layout(){
    initscr();
    noecho();
    cbreak();

    start_color();
   	keypad(stdscr, TRUE); //for arrow key and special chars....
    
   	init_pair(1, COLOR_CYAN, COLOR_BLACK);
   	init_pair(2, COLOR_RED, COLOR_BLACK);
   	init_pair(3, COLOR_GREEN, COLOR_BLACK);
   	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
   	init_pair(4, COLOR_BLUE, COLOR_BLACK);

    getmaxyx(stdscr, row, col);

    gameWindow = createWindow(row, col, startY, startX );  //create a window
    refresh();
   // Draw();
}

WINDOW* Layout::createWindow(int height, int width, int starty, int startx)
{	WINDOW *local_win;

	local_win = newwin(height, width, starty, startx);
	box(local_win, 0 , 0);		/* 0, 0 gives default characters
					 * for the vertical and horizontal
					 * lines			*/
	wrefresh(local_win);		/* Show that box 		*/

	return local_win;
}

Layout::~Layout(){
    delwin(gameWindow);
    endwin();

}

void Layout::Draw(){
    mvwprintw(gameWindow, 0, 0,"Welcome to RPG.....\n");
    mvwprintw(gameWindow, 1, 0,"Under construction.....\n");
    refresh();
    wrefresh(gameWindow);
    userInput();

}

void Layout::userInput(){

    keyPressed = getch();
}
