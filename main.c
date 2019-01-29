#include "game.h"


int score[2] = {0, 0};
int table[SIZE][SIZE];

int main() {
system("clear");
  initTable();
  int canChoice = rand() % SIZE;

  game(canChoice);

  return 0;
}
