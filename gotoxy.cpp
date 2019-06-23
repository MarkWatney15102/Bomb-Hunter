#include "gotoxy.h"

void gotoxy (int x, int y)
{
    COORD coord; 
    coord.X = x - 1; coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clrscr()
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
   	CONSOLE_SCREEN_BUFFER_INFO csbi;
   	GetConsoleScreenBufferInfo(hStdOut, &csbi); 
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}
