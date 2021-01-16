#include <stdio.h>
#include <stdlib.h>
#include "puzzle.h"

extern int count;
extern int(*puzzle)[10];

extern struct Coordinate e;
extern struct Coordinate x;


void printLine(int flag, int size) {

	int i;
	
	switch (flag) {
	case 1:
		printf("忙");

		for (i = 0; i < size - 1; i++) {
			printf("式式式式成");
		}

		printf("式式式式忖\n");
		break;
	case 2:
		printf("戍式式式式");
		for (i = 0; i < size - 1; i++) {
			printf("托式式式式");
		}
		printf("扣\n");
		break;
	case 3:
		printf("戌式");
		for (i = 0; i < size - 1; i++) {
			printf("式式式扛式");
		}
		printf("式式式戎  ");
	}

}

void puzzlePrint(int size) {

	int i, j, k;

	system("cls");

	printLine(1, size);

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("弛");
			if (puzzle[i][j] == 0) printf(" ≠ ");
			else printf("%2d  ", puzzle[i][j]);

		}

		printf("弛\n");

		if (i != size - 1) {
			printLine(2, size);
		}


	}

	printLine(3, size);
	printf("\n衛紫и �蝦� : %d", count);
}
