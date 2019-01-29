#include "game.h"

#define SIZE 8

int score[2] = {0, 0};
int table[SIZE][SIZE];

int main() {
system("clear");
  initTable();
  int canChoice = rand() % 8;

  game(canChoice);

  return 0;
}
