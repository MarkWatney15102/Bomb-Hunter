#include "updateGame.h"

void updateSteps(int steps) {
	gotoxy(3, 23);
	cout << "Schritte: " << steps;
}

void updateHP(int hp)
{
	gotoxy(73, 1);
	cout << "HP: " << hp;
}

void updatePoints(int hitBomb)
{
	gotoxy(3, 1);
	cout << "Points: " << hitBomb;
}
