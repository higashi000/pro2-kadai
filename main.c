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
  int tmp = rand() & 19 - 9;
  while (1) {
    tmp = dispTable(turn % 2, tmp);
    system("clear");
    turn++;
  }

  return 0;
}
