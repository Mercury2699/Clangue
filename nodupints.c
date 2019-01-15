#include <stdio.h>

int no_dup(int n) {
  int used[10]={0};
  int curr = n;
  for (;n > 0; n /= 10) {
    curr = n % 10;
    if (used[curr]) {
      return 0;
    }
    used[curr]=1;
  }
  return 1;
}

int main(void) {
  for (int i = 1; i <= 2147483647; ++i) {
    if (i == 2147483647) break;
    if (no_dup(i)) printf("%d\n",i);
  }
}