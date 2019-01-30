#include "makeTable.h"

void initTable() {
  makeTablePoint();
}

int dispTable(int player, int no) {
  if (player == SENTE) return senteTable(no);
  else if (player == GOTE) return goteTable(no);

  return 0;
}

int senteTable(int no) {
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

  puts("");
  puts("");
  for (line = 0; line < 29; ++line) printf("-");
  puts("");

  printf("先手の点数: %d点\n", score[0]);
  puts("");
  printf("後手の点数: %d点\n", score[1]);
  puts("");

  for (line = 0; line < 29; ++line) printf("-");
  puts("");
  puts("");



  while (input(&lineP, &colP, SENTE, no) == 0);
  score[SENTE] += table[lineP][colP];
  table[lineP][colP] = -99;

  return colP;
}

int goteTable(int no) {
  int line, col;
  int lineP = 0, colP = 0;

  printf("     ");
  for (line = 0; line < SIZE; ++line) printf("%3d", line);
  puts("");

  for (line = 0; line < 29; ++line) printf("-");
  puts("");

  printf("     ");
  for (line = 0; line < SIZE; ++line) {
    if (line == no){
      printf(" ##");
    } else {
      printf("   ");
    }
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
      printf(" ##");
    } else {
      printf("   ");
    }
  }
  puts("");
  puts("");
  for (line = 0; line < 29; ++line) printf("-");
  puts("");

  printf("先手の点数: %d点\n", score[0]);
  puts("");
  printf("後手の点数: %d点\n", score[1]);
  puts("");

  for (line = 0; line < 29; ++line) printf("-");
  puts("");
  puts("");

  while (input(&lineP, &colP, GOTE, no) == 0);
  score[GOTE] += table[lineP][colP];
  table[lineP][colP] = -99;

  return lineP;
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

