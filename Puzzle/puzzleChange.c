#include <stdio.h>
#include "puzzle.h"


extern int count;
extern int(*puzzle)[10];

extern struct Coordinate e;
extern struct Coordinate x;


int puzzleChange(unsigned char key, int size) {


	int temp;

	switch (key) {
	case 72:
		if (e.x == 0) break;
		e.x--;
		count++;
		break;

	case 75:
		if (e.y == 0) break;
		e.y--;
		count++;
		break;

	case 77:
		if (e.y == (size - 1)) break;
		e.y++;
		count++;
		break;

	case 80:
		if (e.x == (size - 1)) break;
		e.x++;
		count++;
		break;
	}

	temp = puzzle[x.x][x.y];
	puzzle[x.x][x.y] = puzzle[e.x][e.y];
	puzzle[e.x][e.y] = temp;
	x = e;

	return count;
}
