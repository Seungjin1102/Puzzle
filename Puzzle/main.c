
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include "puzzle.h"



int count = 0;
int(*puzzle)[10];


struct Coordinate e = { 0 };
struct Coordinate x = { 0 };

int main() {
	
	
	int size;
	
	printf("������ ����� �Է��ϼ��� : ");
	scanf_s("%d", &size);
	

	puzzlelnit(size);
	puzzleGame(size);

	
	free(puzzle);

	return 0;
}
