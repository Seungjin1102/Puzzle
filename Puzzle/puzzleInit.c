#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "puzzle.h"

extern int count;
extern int(*puzzle)[10];

extern struct Coordinate e;
extern struct Coordinate x;

void puzzlelnit(int n) {

	int a[100];
	int k = 0;
	int i, j;

	puzzle = (int(*)[10])malloc(10 * 10 * sizeof(int*));
	if (puzzle == 0) printf("메모리 부족\n");

	srand(time(NULL));
	for (i = 0; i < (n * n); i++) {
		a[i] = rand() % (n * n);
		for (j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				i--;
				break;
			}
		}
	}


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			puzzle[i][j] = a[k++];
		}
	}


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (puzzle[i][j] == 0) {
				e.x = i;
				e.y = j;
				x.x = i;
				x.y = j;
			}
		}
	}




}