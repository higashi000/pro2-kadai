#include "input.h"

int input(int* lineP, int* colP, int nowTurn, int nowInput) {

  printf("行 >> ");
  scanf("%d", lineP);
  printf("列 >> ");
  scanf("%d", colP);

  if (table[*lineP][*colP] == -99) {
    printf("This point is already input. Please onemore input.\n");
    input(lineP, colP, nowTurn, nowInput);
  }

  if (nowTurn == 0) {
    if (*lineP != nowInput) return 0;
  } else {
    if (*colP != nowInput) return 0;
  }

  return 1;
}
