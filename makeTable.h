#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"

#define SIZE 8
#define SENTE 0
#define GOTE 1

extern int table[SIZE][SIZE];
extern int score[2];

void makeTablePoint();
void initTable();
int dispTable(int player, int no);
int senteTable(int no);
int goteTable(int no);
