/*ncurses.c*/

#include <ncurses.h>
#include<unistd.h>
int main()
{

char letter;

initscr();
printw("Press any key");
refresh();

letter =  getch(); //getchar();
clear();
printw("You pushed '%c'", letter);
//sleep(1);
refresh();

getch();
endwin();

return 0;

}