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
		printf("��");

		for (i = 0; i < size - 1; i++) {
			printf("����������");
		}

		printf("����������\n");
		break;
	case 2:
		printf("����������");
		for (i = 0; i < size - 1; i++) {
			printf("����������");
		}
		printf("��\n");
		break;
	case 3:
		printf("����");
		for (i = 0; i < size - 1; i++) {
			printf("����������");
		}
		printf("��������  ");
	}

}

void puzzlePrint(int size) {

	int i, j, k;

	system("cls");

	printLine(1, size);

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("��");
			if (puzzle[i][j] == 0) printf(" �� ");
			else printf("%2d  ", puzzle[i][j]);

		}

		printf("��\n");

		if (i != size - 1) {
			printLine(2, size);
		}


	}

	printLine(3, size);
	printf("\n�õ��� Ƚ�� : %d", count);
}
