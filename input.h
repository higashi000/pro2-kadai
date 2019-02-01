#ifndef PRO2_KAZUTORI_INPUT_H_
#define PRO2_KAZUTORI_INPUT_H_

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
#define SENTE 0
#define GOTE 1

extern int table[SIZE][SIZE];
int input(int* lineP, int* colP, int nowTurn, int nowInput);

#endif
