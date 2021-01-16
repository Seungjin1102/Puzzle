#include <stdio.h>
#include "puzzle.h"


extern int count;
extern int(*puzzle)[10];

extern struct Coordinate e;
extern struct Coordinate x;


int puzzleCheck(int size) {

	int a[100];
	int i, j;
	int k = 0;
	int g = 0;

	for (i = 0; i < size * size; i++) {
		if (i == ((size * size) - 1)) a[i] = 0;
		else a[i] = i + 1;
	}

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (a[k++] == puzzle[i][j]) g++;
		}
	}
	if (g == (size * size)) return 0;
	else return 1;






}
