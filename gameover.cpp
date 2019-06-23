#include "gameover.h"

void gameOver(int hitBomb, int steps, double endtime, int reason)
{
	Sleep(500);
	clrscr();
	for(int i = 1; i <= 40; i++) { gotoxy(i + 20, 7); cout << char(205); gotoxy(i + 20, 15); cout << char(205); }	
	for(int i = 1; i <= 7; i++) { gotoxy(21, i + 7); cout << char(186); gotoxy(60, i + 7); cout << char(186); }
	
	gotoxy(21, 7); cout << char(201);
	gotoxy(60, 7); cout << char(187);
	gotoxy(21, 15); cout << char(200);
	gotoxy(60, 15); cout << char(188);
	
	gotoxy(36, 8);
	cout << "Game Over";
	
	gotoxy(36, 10);
	cout << "Punkte: " << hitBomb;
	
	gotoxy(35, 11);
	cout << "Schritte: " << steps;
	
	gotoxy(30, 12);
	cout << "Zeit: " << endtime << " Sekunden";
	
	if(reason == 1) {
		gotoxy(23, 13);
		cout << "Du hast einen Falschen Punkt ber" << char(129) << "hrt!";
	}
	
	gotoxy(23, 14);
	cout << "Es geht in 5 Sekunden zu Hauptmenu!";
	
	Sleep(5000);
}
