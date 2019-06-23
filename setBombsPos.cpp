#include "setBombsPos.h"

static int x[10], y[10];

void setBomsPosition() 
{
	
}

void getCords()
{
	for(int i = 1; i < 10; i++) {
		x[i] = (rand() % 78) + 1;
		y[i] = (rand() % 22) + 1;
		
		while(x[i] == 79 || x[i] == 1) {
			x[i] = (rand() % 78) + 1;
		}
		
		while(y[i] == 1 || y[i] == 23) {
			y[i] = (rand() % 22) + 1;
		}
	}
}
