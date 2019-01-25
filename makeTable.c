#include "makeTable.h"

void initTable() {
  makeTablePoint();
}

void dispTable(int player, int no) {
  if (player == SENTE) senteTable(no);
  else if (player == GOTE) goteTable(no);
}

void senteTable(int no) {
  int line, col;
  int lineP = 0, colP = 0;

  printf("     ");
  for (line = 0; line < SIZE; ++line) printf("%3d", line);
  printf("\n");

  for (line = 0; line < 29; ++line) printf("-");
  printf("\n");
  for (line = 0; line < 29; ++line) printf(" ");
  printf("\n");

  for (line = 0; line < SIZE; ++line) {
    printf("%2d|", line);

    if (no == line) {
      printf("[ ");
    } else {
      printf("  ");
    }

    for (col = 0; col < SIZE; ++col) {
      if (table[line][col] == -99) {
        printf(" **");
      } else {
        printf("%3d", table[line][col]);
      }
    }
    if (no == line) {
      printf(" ]\n");
    } else {
      printf("\n");
    }
  }


  while (input(&lineP, &colP, SENTE, no) == 0);
  score[SENTE] += table[lineP][colP];
  table[lineP][colP] = -99;
}

void goteTable(int no) {
  int line, col;
  int lineP = 0, colP = 0;

  printf("     ");
  for (line = 0; line < SIZE; ++line) printf("%3d", line);
  puts("");

  for (line = 0; line < 29; ++line) printf("-");
  puts("");

  printf("     ");
  for (line = 0; line < SIZE; ++line) {
    if (line == no) printf(" **");
    else printf("    ");
  }
  puts("");

  for (line = 0; line < SIZE; ++line) {
    printf("%2d|", line);
    printf("  ");

    for (col = 0; col < SIZE; ++col) {
      if (table[line][col] == -99) {
        printf(" **");
      } else {
        printf("%3d", table[line][col]);
      }
    }

    printf("\n");
  }
  printf("     ");
  for (line = 0; line < SIZE; ++line) {
    if (line == no) {
      printf(" **");
    } else {
      printf("   ");
    }
  }
  puts("");

  while (input(&lineP, &colP, GOTE, no) == 0);
  score[GOTE] += table[lineP][colP];
  table[lineP][colP] = -99;
}

void makeTablePoint() {
  srand(time(NULL));
  int line, col;

  for (line = 0; line < SIZE; ++line) {
    for (col = 0; col < SIZE; ++col) {
      table[line][col] = rand() % 19 - 9;
    }
  }
}
