#include "rahmen.h"
void rahmen()
{
	for(int i = 2; i < 80; i++) { gotoxy(i, 1); cout << char(205); } // Obere Linie
	for(int i = 2; i < 80; i++) { gotoxy(i, 23); cout << char(205); } // Untere Linie
	for(int i = 2; i < 23; i++) { gotoxy(1, i); cout << char(186); } // Linke Linie
	for(int i = 2; i < 23; i++) { gotoxy(80, i); cout << char(186); } // Rechte Linie
	
	gotoxy(1, 1); cout << char(201);
	gotoxy(80, 1); cout << char(187);
	gotoxy(1, 23); cout << char(200);
	gotoxy(80, 23);cout << char(188);
}

void menuRahmen(int allPoints)
{
	for(int i = 2; i < 80; i++) { gotoxy(i, 1); cout << char(205); gotoxy(i, 23); cout << char(205); gotoxy(i, 20); cout << char(205); gotoxy(i, 3); cout << char(205); } // Waagerechte Linien
	for(int i = 2; i < 23; i++) { gotoxy(1, i); cout << char(186); gotoxy(80, i); cout << char(186); } // Senkrechte Linien
	for(int i = 2; i < 20; i++) { gotoxy(47, i); cout << char(186); } // Senkrechte
	
	// Rahmen Ecken
	gotoxy(1, 1); cout << char(201); // Oben Links
	gotoxy(80, 1); cout << char(187); // Oben Rechts
	gotoxy(1, 23); cout << char(200); // Unten Links
	gotoxy(80, 23); cout << char(188); // Unten Rechts
	
	// Tabellen Ecken
	gotoxy(47, 1); cout << char(203);
	gotoxy(47, 3); cout << char(206);
	gotoxy(1, 3); cout << char(204);
	gotoxy(80, 3); cout << char(185);
	gotoxy(1, 20); cout << char(204);
	gotoxy(80, 20); cout << char(185);
	gotoxy(47, 20); cout << char(202);
	
	gotoxy(55, 2);
	cout << "-> Besten Liste <-";
	
	gotoxy(16, 2);
	cout << "-> Spiel Modi <-";
	
	for(int i = 1; i <= 15; i++) { gotoxy(49, i + 3); cout << i << ". - Eike W. - " << allPoints << " Points"; }
}

