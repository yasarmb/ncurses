/*arrow.c*/

#include <ncurses.h>

int main()
{

int key, x, y;

initscr();
keypad(stdscr, TRUE);
noecho();

x = y = 0;
while (key !='q'){
clear();
move(0,0);
printw("Press left or right - exit by pressing: q");
refresh();
move(y,x);
printw("0");
refresh();

key = getch();

if (key == KEY_LEFT){

    x--;
    if ( x < 0) x = 0;

}


else if (key == KEY_RIGHT){

    x++;
    if ( x > 40) x = 40; // Stops there
    
}
}

endwin();
return 0;
}