#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <fstream>
#include <string>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_RIGHT 75
#define KEY_LEFT 77
#define KEY_KILL 120
#define PLAYER 120

// Challenges
#define TIME_CHALLENGE_1 10
#define TIME_CHALLENGE_2 30
#define TIME_CHALLENGE_3 60
#define STEP_CHALLENGE_1 50 
#define STEP_CHALLENGE_2 100 
#define STEP_CHALLENGE_3 200 

using namespace std;

void clrscr();
void gotoxy();
void rahmen();
void menu();
void startGame();
void move_player();
void setBomsPosition();
void updatePoints();
void updatePlayTime();
void menuRahmen();
void updateSteps();
void shop();
void stats();
void gameOver();
void einstellungen();
void hitEnemy();
void updateHP();
void onBombExecute() { setBomsPosition(); rahmen(); updatePoints(); updateSteps(); updateHP(); }
void exitGame() { exit(0); }

bool isOutOfField();
bool onBomb();

// Timer
clock_t start;
double 	duration,
		endtime = 0;

// Objects
int obj1_x = 0, obj1_y = 0,
	obj2_x = 0, obj2_y = 0,
	obj3_x = 0, obj3_y = 0,
	obj4_x = 0, obj4_y = 0, 
	obj5_x = 0, obj5_y = 0,
	obj6_x = 0, obj6_y = 0,
	obj7_x = 0, obj7_y = 0,
	obj8_x = 0, obj8_y = 0,
	obj9_x = 0, obj9_y = 0,
	obj10_x = 0, obj10_y = 0;
	
int enemy1_x = 0, enemy1_y = 0,
	enemy2_x = 0, enemy2_y = 0; 

// Player Coordinaten, Challenges etc
int x_cord, // X Coordinate des Spielers
	y_cord, // Y Coordinate des Spielers
	beep_border = 350, // Int für Beep Ton bei Berühren der Wand
	hitBomb = 0, // Punkte
	challenge = 0, 
	steps = 0, // Schritte
	steps_challenge = 0,
	playerMoveBlocks = 1,
	playerPointMultiplayer = 1,
	allPoints = 0,
	menuPoint = 1,
	reason = 0,
	hp = 3;
	
bool run;

HANDLE cmd = GetStdHandle(STD_OUTPUT_HANDLE);
