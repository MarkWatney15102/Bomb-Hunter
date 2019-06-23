/*
	Title: Bomb Hunter
	Author: Eike Wientjes
	Version: v0.1.1
	Description: Game by Eike
*/

#include "header.h"

bool isOutOfField(int x, int y)
{
	if(x > 79 || x < 2)
		return true;
		
	if(y > 22 || y < 2)
		return true;
}

void menu()
{
	allPoints = allPoints + hitBomb;
	challenge = 0;
	steps_challenge = 0;
	int optionMenu = 0;
	int menuPoint = 1;
	int enter = 0;
	
	CONSOLE_CURSOR_INFO cu;
	cu.bVisible = true;
	cu.dwSize = 20;
	SetConsoleCursorInfo(cmd,&cu);
	
	clrscr();
	menuRahmen(allPoints);
	
	int option = 0;
	
	gotoxy(3, 4);
	cout << "[ ] Spiel starten (" << TIME_CHALLENGE_1 << " sek Challenge)";
	
	gotoxy(3, 5);
	cout << "[ ] Spiel starten (" << TIME_CHALLENGE_2 << " sek Challenge)";
	
	gotoxy(3, 6);
	cout << "[ ] Spiel starten (" << TIME_CHALLENGE_3 << " sek Challenge)";
	
	gotoxy(3, 7);
	cout << "[ ] Spiel starten (" << STEP_CHALLENGE_1 << " Steps Challenge)";
	
	gotoxy(3, 8);
	cout << "[ ] Spiel starten (" << STEP_CHALLENGE_2 << " Steps Challenge)";
	
	gotoxy(3, 9);
	cout << "[ ] Spiel starten (" << STEP_CHALLENGE_3 << " Steps Challenge)";
	
	gotoxy(3, 10);
	cout << "[ ] Spiel starten (Keine Challenge)";
	
	gotoxy(3, 11);
	cout << "[ ] Shop";
	
	gotoxy(3, 12);
	cout << "[ ] Statistiken / Level (Nicht Fertig)";
	
	gotoxy(3, 13);
	cout << "[ ] Einstellungen";
	
	gotoxy(3, 14);
	cout << "[ ] Spiel beenden";
	
	gotoxy(3, 15);
	cout << "[ ] About me";
	
	if(endtime != 0) {
		gotoxy(3, 20);
		cout << char(175) << "Letztes Spiel" << char(174);
		gotoxy(3, 21);
		cout << "Du hast " << endtime << " Sekunden geschafft! Schritte: " << steps;
		gotoxy(3, 22);
		cout << "In der angegebenen Zeit hast du " << hitBomb << " Punkte erreicht!";
	}
	
	gotoxy(4, 4);
	menuPoint = 1;
	
	while(1) 
	{
		switch((optionMenu = getch()))
		{
			case KEY_DOWN:
					menuPoint++;
					if(menuPoint == 1) {
						gotoxy(4, 4);
					}else if(menuPoint == 2) {
						gotoxy(4, 5);
					}else if(menuPoint == 3) {
						gotoxy(4, 6);
					}else if(menuPoint == 4) {
						gotoxy(4, 7);
					}else if(menuPoint == 5) {
						gotoxy(4, 8);
					}else if(menuPoint == 6) {
						gotoxy(4, 9);
					}else if(menuPoint == 7) {
						gotoxy(4, 10);
					}else if(menuPoint == 8) {
						gotoxy(4, 11);
					}else if(menuPoint == 9) {
						gotoxy(4, 12);
					}else if(menuPoint == 10) {
						gotoxy(4, 13);
					}else if(menuPoint == 11) {
						gotoxy(4, 14);
					}else if(menuPoint == 12) {
						gotoxy(4, 15);	
					}else {
						menuPoint--;
					}
					switch((enter = getch())) 
					{
						case 13:
								cout << "X";
								Sleep(500);
								if(menuPoint == 1) {
									challenge = TIME_CHALLENGE_1;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 2) {
									challenge = TIME_CHALLENGE_2;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 3) {
									challenge = TIME_CHALLENGE_3;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 4) {
									challenge = 1;
									steps_challenge = STEP_CHALLENGE_1;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 5) {
									challenge = 1;
									steps_challenge = STEP_CHALLENGE_2;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 6) {
									challenge = 1;
									steps_challenge = STEP_CHALLENGE_3;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 7) {
									challenge = 1;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 8) {
									shop();
								}else if(menuPoint == 9) {
									stats();
								}else if(menuPoint == 10) {
									einstellungen();
								}else if(menuPoint == 11) {
									exitGame();
								}else if(menuPoint == 12) {
									// Über mich einbauen
								}
							break;
					}
				break;
			case KEY_UP:
					menuPoint--;
					if(menuPoint == 1) {
						gotoxy(4, 4);
					}else if(menuPoint == 2) {
						gotoxy(4, 5);
					}else if(menuPoint == 3) {
						gotoxy(4, 6);
					}else if(menuPoint == 4) {
						gotoxy(4, 7);
					}else if(menuPoint == 5) {
						gotoxy(4, 8);
					}else if(menuPoint == 6) {
						gotoxy(4, 9);
					}else if(menuPoint == 7) {
						gotoxy(4, 10);
					}else if(menuPoint == 8) {
						gotoxy(4, 11);
					}else if(menuPoint == 9) {
						gotoxy(4, 12);
					}else if(menuPoint == 10) {
						gotoxy(4, 13);
					}else if(menuPoint == 11) {
						gotoxy(4, 14);
					}else if(menuPoint == 12) {
						gotoxy(4, 15);
					}else {
						menuPoint++;
					}
					switch((enter = getch())) 
					{
						case 13:
								cout << "X";
								Sleep(500);
								if(menuPoint == 1) {
									challenge = TIME_CHALLENGE_1;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 2) {
									challenge = TIME_CHALLENGE_2;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 3) {
									challenge = TIME_CHALLENGE_3;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 4) {
									challenge = 1;
									steps_challenge = STEP_CHALLENGE_1;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 5) {
									challenge = 1;
									steps_challenge = STEP_CHALLENGE_2;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 6) {
									challenge = 1;
									steps_challenge = STEP_CHALLENGE_3;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 7) {
									challenge = 1;
									run = true;
									hitBomb = 0;
									steps = 0;
									startGame();
								}else if(menuPoint == 8) {
									shop();
								}else if(menuPoint == 9) {
									stats();
								}else if(menuPoint == 10) {
									einstellungen();
								}else if(menuPoint == 11) {
									exitGame();
								}else if(menuPoint == 12) {
									// Über mich einbauen
								}
							break;
					}
				break;
		}
	}
}

void startGame()
{
	start = clock();
	clrscr();
	rahmen();
	
	x_cord = 39;
	y_cord = 7;
	
	gotoxy(39, 7);
	cout << char(PLAYER);
	
	CONSOLE_CURSOR_INFO cu;
	cu.bVisible = false;
	cu.dwSize = 20;
	SetConsoleCursorInfo(cmd,&cu);
	
	setBomsPosition();
	updatePoints(hitBomb);
	updateSteps(steps);
	updateHP(hp);
	
	while(1) {
		move_player();
	}
}

int main(int argc, char** argv) 
{
	setBomsPosition();
	getch();
	
	srand((unsigned)time(NULL));
	SetConsoleTextAttribute(cmd, 2);
	menu();
	return 0;
}

void move_player() 
{
	int c = 0;
	
	while(run == true) {
		updatePlayTime();
		switch((c = getch())) {
			case KEY_UP:
				// Up
					y_cord = y_cord - playerMoveBlocks;
					if(!isOutOfField(x_cord, y_cord)) {
						gotoxy(x_cord, y_cord + playerMoveBlocks);
						cout << " ";
						gotoxy(x_cord, y_cord); 
						cout << char(PLAYER);
						steps = steps + 1;
						updateSteps(steps);
						if(onBomb()) {
							onBombExecute();
						}
					}else { 
						y_cord = y_cord + playerMoveBlocks;
						Beep(beep_border,100);
					}
					 
				break;
			case KEY_DOWN:
				// Down
					y_cord = y_cord + playerMoveBlocks;
					if(!isOutOfField(x_cord, y_cord)) {
						gotoxy(x_cord, y_cord - playerMoveBlocks);
						cout << " ";
						gotoxy(x_cord, y_cord); 
						cout << char(PLAYER);
						steps = steps + 1;
						updateSteps(steps);
						if(onBomb()) {
							onBombExecute();
						}
					}else {
					 	y_cord = y_cord - playerMoveBlocks; 
					 	Beep(beep_border,100);
					}
					 
				break;
			case KEY_RIGHT:
				// Right
					x_cord = x_cord - playerMoveBlocks;
					if(!isOutOfField(x_cord, y_cord)) { 
						gotoxy(x_cord + playerMoveBlocks, y_cord);
						cout << " ";
						gotoxy(x_cord, y_cord); 
						cout << char(PLAYER);
						steps = steps + 1;
						updateSteps(steps);
						if(onBomb()) {
							onBombExecute();
						}
					}else { 
						x_cord = x_cord + playerMoveBlocks;
						Beep(beep_border,100);
					}
					 
				break;
			case KEY_LEFT:
				// Left
					x_cord = x_cord + playerMoveBlocks;
					if(!isOutOfField(x_cord, y_cord)) { 
						gotoxy(x_cord - playerMoveBlocks, y_cord);
						cout << " ";
						gotoxy(x_cord, y_cord); 
						cout << char(PLAYER); 
						steps = steps + 1;
						updateSteps(steps);
						if(onBomb()) {
							onBombExecute();
						}
					}else { 
						x_cord = x_cord - playerMoveBlocks; 
						Beep(beep_border,100);
					}
					 
				break;
			case KEY_KILL:
				// Quit Game (use "x" Key)
					updatePlayTime();
					run = false;
					gameOver(hitBomb, steps, endtime, reason);
					menu();
				break;
		}
	}
}

bool onBomb()
{
	if(x_cord == obj1_x && y_cord == obj1_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;
	}else if(x_cord == obj2_x && y_cord == obj2_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;
	}else if(x_cord == obj3_x && y_cord == obj3_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;
	}else if(x_cord == obj4_x && y_cord == obj4_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;
	}else if(x_cord == obj5_x && y_cord == obj5_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;
	}else if(x_cord == obj6_x && y_cord == obj6_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;	
	}else if(x_cord == obj7_x && y_cord == obj7_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;	
	}else if(x_cord == obj8_x && y_cord == obj8_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;
	}else if(x_cord == obj9_x && y_cord == obj9_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;	
	}else if(x_cord == obj10_x && y_cord == obj10_y) {
		hitBomb = hitBomb + (1 * playerPointMultiplayer);
		return true;	
	}
	
	if(x_cord == enemy1_x && y_cord == enemy1_y || x_cord == enemy2_x && y_cord == enemy2_y) {
		hitEnemy();
		return true;
	}
	
	return false;
}

void hitEnemy() 
{
	if(hitBomb > 0)
		hitBomb--;
		
	if(hp > 1) {
		hp--;
		updateHP(hp);
	}else {
		reason = 1;
		gameOver(hitBomb, steps, endtime, reason);
		menu();
	}
}

void setBomsPosition()
{
	gotoxy(obj1_x, obj1_y);
	cout << " ";
	
	gotoxy(obj2_x, obj2_y);
	cout << " ";
	
	gotoxy(obj3_x, obj3_y);
	cout << " ";
	
	gotoxy(obj4_x, obj4_y);
	cout << " ";
	
	gotoxy(obj5_x, obj5_y);
	cout << " ";
	
	gotoxy(obj6_x, obj6_y);
	cout << " ";
	
	gotoxy(obj7_x, obj7_y);
	cout << " ";
	
	gotoxy(obj8_x, obj8_y);
	cout << " ";
	
	gotoxy(obj9_x, obj9_y);
	cout << " ";
	
	gotoxy(obj10_x, obj10_y);
	cout << " ";
	
	gotoxy(enemy1_x, enemy1_y);
	cout << " ";
	
	gotoxy(enemy2_x, enemy2_y);
	cout << " ";
	
	
	gotoxy(x_cord, y_cord);
	cout << char(PLAYER);
	
	obj1_x = (rand() % 78) + 1;
	obj1_y = (rand() % 22) + 1;
	
	obj2_x = (rand() % 78) + 1;
	obj2_y = (rand() % 22) + 1;
	
	obj3_x = (rand() % 78) + 1;
	obj3_y = (rand() % 22) + 1;
	
	obj4_x = (rand() % 78) + 1;
	obj4_y = (rand() % 22) + 1;
	
	obj5_x = (rand() % 78) + 1;
	obj5_y = (rand() % 22) + 1;
	
	obj6_x = (rand() % 78) + 1;
	obj6_y = (rand() % 22) + 1;
	
	obj7_x = (rand() % 78) + 1;
	obj7_y = (rand() % 22) + 1;
	
	obj8_x = (rand() % 78) + 1;
	obj8_y = (rand() % 22) + 1;
	
	obj9_x = (rand() % 78) + 1;
	obj9_y = (rand() % 22) + 1;
	
	obj10_x = (rand() % 78) + 1;
	obj10_y = (rand() % 22) + 1;
	
	enemy1_x = (rand() % 78) + 1;
	enemy1_y = (rand() % 22) + 1;
	
	enemy2_x = (rand() % 78) + 1;
	enemy2_y = (rand() % 22) + 1;
	
	if(obj1_x == 1 || obj1_y == 23) {
		obj1_x = (rand() % 78) + 1;
		obj1_y = (rand() % 22) + 1;
	}
	
	if(obj2_x == 1 || obj2_y == 23) {
		obj2_x = (rand() % 78) + 1;
		obj2_y = (rand() % 22) + 1;
	}
	
	if(obj3_x == 1 || obj3_y == 23) {
		obj3_x = (rand() % 78) + 1;
		obj3_y = (rand() % 22) + 1;
	}
	
	if(obj4_x == 1 || obj4_y == 23) {
		obj4_x = (rand() % 78) + 1;
		obj4_y = (rand() % 22) + 1;
	}
	
	if(obj5_x == 1 || obj5_y == 23) {
		obj5_x = (rand() % 78) + 1;
		obj5_y = (rand() % 22) + 1;
	}
	
	if(obj6_x == 1 || obj6_y == 23) {
		obj6_x = (rand() % 78) + 1;
		obj6_y = (rand() % 22) + 1;
	}
	
	if(obj7_x == 1 || obj7_y == 23) {
		obj7_x = (rand() % 78) + 1;
		obj7_y = (rand() % 22) + 1;
	}
	
	if(obj8_x == 1 || obj8_y == 23) {
		obj8_x = (rand() % 78) + 1;
		obj8_y = (rand() % 22) + 1;
	}
	
	if(obj9_x == 1 || obj9_y == 23) {
		obj9_x = (rand() % 78) + 1;
		obj9_y = (rand() % 22) + 1;
	}
	
	if(obj10_x == 1 || obj10_y == 23) {
		obj10_x = (rand() % 78) + 1;
		obj10_y = (rand() % 22) + 1;
	}
	
	gotoxy(obj1_x, obj1_y);
	cout << "O";
	
	gotoxy(obj2_x, obj2_y);
	cout << "O";
	
	gotoxy(obj3_x, obj3_y);
	cout << "O";
	
	gotoxy(obj4_x, obj4_y);
	cout << "O";
	
	gotoxy(obj5_x, obj5_y);
	cout << "O";
	
	gotoxy(obj6_x, obj6_y);
	cout << "O";
	
	gotoxy(obj7_x, obj7_y);
	cout << "O";
	
	gotoxy(obj8_x, obj8_y);
	cout << "O";
	
	gotoxy(obj9_x, obj9_y);
	cout << "O";
	
	gotoxy(obj10_x, obj10_y);
	cout << "O";
	
	gotoxy(enemy1_x, enemy1_y);
	cout << "0";
	
	gotoxy(enemy2_x, enemy2_y);
	cout << "0";
}

void shop()
{
	clrscr();
	rahmen();
	
	gotoxy(3, 1); 
	cout << "Points: " <<  allPoints;
	
	int input;
	
	if(playerMoveBlocks == 1) {
		gotoxy(3, 3);
		cout << "[ ] (1) Doppelte Spruenge - Kosten: 25 Points";	
	}
	
	gotoxy(3, 4);
	cout << "[ ] (2) Doppelte Points - Kosten: 10 Points";	
	
	gotoxy(3, 21);
	cout << "[ ] Verlassen";
	
	gotoxy(4, 21);
	
	int select = 0;
	int select2 = 0;
	int start_y = 21; 
	
	while(1)
	{
		switch((select = getch()))
		{
			case KEY_DOWN:
					start_y++;
					if(start_y == 21) {
						gotoxy(4, 21);
					}else if(start_y == 20) {
						gotoxy(4, 4);
					}else if(start_y == 19) {
						gotoxy(4, 3);
					}else {
						start_y--;
					}
					switch((select2 = getch()))
					{
						case 13:
							cout << "X";
							if(start_y == 21) {
								Sleep(500);
								menu();	
							}else if(start_y == 20) {
								if(allPoints >= 10) {
									allPoints = allPoints - 10;
									playerPointMultiplayer = playerPointMultiplayer * 2;
									gotoxy(3, 1);
									cout << "Points: " <<  allPoints;
								}
								Sleep(500);
								menu();	
							}else if(start_y == 19) {
								if(allPoints >= 25) {
									allPoints = allPoints - 25;
									playerMoveBlocks = playerMoveBlocks * 2;
									gotoxy(3, 1); 
									cout << "Points: " <<  allPoints;	
								}
								Sleep(500);
								menu();
							}
							
							break;
					}
				break; 
			case KEY_UP:
					start_y--;
					if(start_y == 21) {
						gotoxy(4, 21);
					}else if(start_y == 20) {
						gotoxy(4, 4);
					}else if(start_y == 19) {
						gotoxy(4, 3);
					}else {
						start_y++;
					}
					switch((select2 = getch()))
					{
						case 13:
							cout << "X";
							if(start_y == 21) {
								Sleep(500);
								menu();	
							}else if(start_y == 20) {
								if(allPoints >= 10) {
									allPoints = allPoints - 10;
									playerPointMultiplayer = playerPointMultiplayer * 2;
									gotoxy(3, 1);
									cout << "Points: " <<  allPoints;
								}
								Sleep(500);
								menu();
							}else if(start_y == 19) {
								if(allPoints >= 25) {
									allPoints = allPoints - 25;
									playerMoveBlocks = playerMoveBlocks * 2;
									gotoxy(3, 1); 
									cout << "Points: " <<  allPoints;
								}
								Sleep(500);
								menu();
							}
							
							break;
					}
				break;
		}
	}
}

void stats()
{
	clrscr();
	streampos size;
 	char * memblock;

	ifstream file ("player.txt", ios::in|ios::binary|ios::ate);
	if (file.is_open())
	{
	    size = file.tellg();
	    memblock = new char [size];
	    file.seekg (0, ios::beg);
	    file.read (memblock, size);
	    file.close();
	    
	    cout << memblock;
	
	    delete[] memblock;
	}else {
		cout << "Datei kann nicht geoeffnet werden!";
		getch();
	}
	
	getch();
	menu();
}

void einstellungen()
{
	clrscr();
	rahmen();
	 
	getch();
	menu();
}

void updatePlayTime()
{
	duration = (clock() - start) / (double) CLOCKS_PER_SEC;
	endtime = duration;
	if(challenge != 1) {
		if(duration >= challenge) {
			run = false;
			gameOver(hitBomb, steps, endtime, reason);
			menu();
		}	
	}
	if(steps_challenge != 0) {
		if(steps >= steps_challenge) {
			run = false;
			gameOver(hitBomb, steps, endtime, reason);	
			menu();
		}
	}
	
	gotoxy(53, 23);
	cout << "Lifetime: " << duration << " sekunden";
}
