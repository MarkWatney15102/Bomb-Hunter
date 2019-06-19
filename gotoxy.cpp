#include "gotoxy.h"

void gotoxy (int x, int y)
{
    COORD coord; 
    coord.X = x - 1; coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
