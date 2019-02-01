#ifndef PRO2_KAZUTORI_MAKE_TABLE_H_
#define PRO2_KAZUTORI_MAKE_TABLE_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"

#define SENTE 0
#define GOTE 1

extern int table[SIZE][SIZE];
extern int score[2];

void makeTablePoint();
void initTable();
int sovler(int no);
int dispTable(int player, int no);
int onePlayDispTable(int player, int no);
int senteTable(int no);
int goteTable(int no);

#endif
