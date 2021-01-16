#include <stdio.h>


struct Coordinate {
	int x;
	int y;
};



void puzzleGame(int size);
int puzzleCheck(int size);
void puzzlePrint(int size);
int puzzleChange(unsigned char key, int size);
int getKey(unsigned char* key);
void puzzlelnit(int n);


