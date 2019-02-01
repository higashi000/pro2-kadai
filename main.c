#include "game.h"


// 先攻,後攻の点数
int score[2] = {0, 0};
// マップのポイントを格納
int table[SIZE][SIZE];

// プレイヤーの人数
int playersNum;

int main() {
  // 画面初期化
  system("clear");

  printf("How many players? (1 or 2) >> ");
  scanf("%d", &playersNum);

  system("clear");

  // ゲームのマップを生成
  initTable();

  // 先手が選択する行を生成
  int canChoice = rand() % SIZE;

  // ゲーム開始
  game(canChoice);

  return 0;
}
