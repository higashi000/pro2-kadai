#include "game.h"

// ゲーム進行用の関数
void game(int canChoice) {
  int lineP;
  int line;
  int col;
  int colP;
  int turn = 0;
  int cntLimite = 0;
  int zentan = 0;

  while (1) {
    if (playersNum == 2) {
      canChoice = dispTable(turn % 2, canChoice);
    } else {
      canChoice = onePlayDispTable(turn % 2, canChoice);
    }

    system("clear");
    turn = (turn + 1) % 2;

    // ゲームが終わっているかの選択 ---{{{
    for (line = 0; line < SIZE; ++line) {
      for (col = 0; col < SIZE; ++col) {
        if (table[line][col] == -99) {
          zentan++;
        }
      }
      if (zentan == SIZE) {
        result();
        return;
      }
      zentan = 0;
    }

    for (col = 0; col < SIZE; ++col) {
      for (line = 0; line < SIZE; ++line) {
        if (table[line][col] == -99) {
          zentan++;
        }
      }
      if (zentan == SIZE) {
        result();
        return;
      }
      zentan = 0;
    }

    // ゲームが終わっているかの選択 ---}}}
  }
}

// リザルト
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
