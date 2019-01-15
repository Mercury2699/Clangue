#include <stdio.h>

int main(void) {
  int a[3] = {1, 2, 3};
  int b[3] = {4, 5};
  int *p = b;
  int *r = a;
  int *q;
  q = p + 2;
  r = r + 2;
  *r = *q;
  *r += 1;
  printf("%d\n", a[2]);
}