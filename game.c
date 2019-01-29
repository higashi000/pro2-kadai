#include "game.h"

void game(int canChoice) {
  int lineP;
  int line;
  int colP;
  int turn = 0;
  int cntLimite = 0;

  while (1) {
    canChoice = dispTable(turn % 2, canChoice);

    system("clear");
    turn++;

    if (turn % 2 == 0) {
      for (line = 0; line < SIZE; ++line) {
        if (table[canChoice][line] == -99) cntLimite++;
      }
      if (cntLimite == SIZE) {
        result();
        break;
      }
      cntLimite = 0;
    } else if (turn % 2 == 1){
      printf("%d\n", canChoice);
      for (line = 0; line < SIZE; ++line) {
        if (table[line][canChoice] == -99) cntLimite++;
      }
      printf("%d\n", cntLimite);
      if (cntLimite == SIZE) {
        result();
        break;
      }
      cntLimite = 0;
    }

  }
}

void result() {
  printf("先手: %d点\n", score[0]);
  printf("後手: %d点\n", score[1]);

  if (score[0] > score[1]) {
    printf("先手の勝ち\n");
  } else if (score[0] < score[1]){
    printf("後手の勝ち\n");
  } else {
    printf("引き分け\n");
  }

}
