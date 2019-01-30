#include "input.h"

int input(int* lineP, int* colP, int nowTurn, int nowInput) {

  if (nowTurn == SENTE) {
    printf("列 >> ");
    scanf("%d", colP);
    *lineP = nowInput;
  } else if (nowTurn == GOTE) {
    printf("行 >> ");
    scanf("%d", lineP);

    *colP = nowInput;
  }

  if (table[*lineP][*colP] == -99) {
    printf("This point is already input. Please onemore input.\n");
    input(lineP, colP, nowTurn, nowInput);
  }

  if (nowTurn == 0) {
    if (0 > *colP || *colP > SIZE - 1) return 0;
  } else {
    if (0 > *lineP || *lineP > SIZE - 1) return 0;
  }

  return 1;
}
