#include <stdio.h>
#include "puzzle.h"

extern int count;
extern int(*puzzle)[10];

extern struct Coordinate e;
extern struct Coordinate x;

void puzzleGame(int size) {

	int a, b;
	unsigned char key;

	while (1) {
		
		puzzlePrint(size);
		a = puzzleCheck(size);
		if (a == 0) break;
		b = getKey(&key);
		if (b == 0) break;
		else count = puzzleChange(b, size);
		
	}
}
