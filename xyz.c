#include <stdio.h>

int apple = 15;
extern int banana;
const int cherry = 17;

int fruit(int melon, int * peach) {
  int *pear = peach;
  peach = &melon;
  *pear += 1;
  while (melon != *pear) {
    ++melon;
    if (melon == cherry) {
      printf("one\n");
    } else if (melon == banana) {
      return banana;
    }
  }
  int grape = banana - apple;
  apple++;
  *pear += 1;
  printf("two\n");
  return grape;
}

int main(void) {
  const int orange = banana;
  int grape = cherry;
  banana = apple/4 + cherry;
  int pear = fruit(grape, &grape);
  printf("three\n");
}