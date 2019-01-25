#include "makeTable.h"

#define SIZE 8

int score[2] = {0, 0};
int table[SIZE][SIZE];

void makeTablePoint();
void initTable();
void dispTable(int player, int no);

int main() {
system("clear");
  initTable();
  int lineP;
  int colP;
  int turn = 0;
  while (1) {
    dispTable(turn % 2, 0);
    system("clear");
    turn++;
  }

  return 0;
}
