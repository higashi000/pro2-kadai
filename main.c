#include "makeTable.h"

#define SIZE 8

int score[2] = {0, 0};
int table[SIZE][SIZE];

int main() {
system("clear");
  initTable();
  int lineP;
  int colP;
  int turn = 0;
  int canChoice = rand() % 8;
  while (1) {
    canChoice = dispTable(turn % 2, canChoice);
    system("clear");
    turn++;
  }

  return 0;
}
