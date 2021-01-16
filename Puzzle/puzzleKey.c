#include <stdio.h>
#include <conio.h>
#include "puzzle.h"


extern int count;
extern int(*puzzle)[10];

extern struct Coordinate e;
extern struct Coordinate x;


int getKey(unsigned char* key) {


	int i, a;

	while (1) {
		for (i = 0; i < 2; i++) {
			*key = _getch();
			a = *key;
			if (a != 224) break;
		}
		if (a == 113) return 0;
		a = *key;
		return a;


	}



}
