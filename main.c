#include "makeTable.h"

#define SIZE 8

int score[2] = {0, 0};
int table[SIZE][SIZE];

int main() {
system("clear");
  initTable();
  int lineP;
  int line;
  int colP;
  int turn = 0;
  int cntLimite = 0;
  int canChoice = rand() % 8;

  while (1) {
    canChoice = dispTable(turn % 2, canChoice);
    system("clear");
    turn++;

    if (turn % 2 == 0) {
      for (line = 0; line < SIZE; ++line) {
        if (table[canChoice][line] == -99) cntLimite++;
      }
      if (cntLimite == SIZE) {
        break;
      }
      cntLimite = 0;
    } else {
      for (line = 0; line < SIZE; ++line) {
        if (table[line][canChoice] == -99) cntLimite++;
      }
      if (cntLimite == SIZE) {
        break;
      }
      cntLimite = 0;
    }
  }

  printf("先手: %d点\n", score[0]);
  printf("後手: %d点\n", score[1]);

  if (score[0] > score[1]) {
    printf("先手の勝ち\n");
  } else if (score[0] < score[1]) {
    printf("後手の勝ち\n");
  } else {
    printf("引き分け\n");
  }

  return 0;
}
