#include <stdio.h>
#include <assert.h>

void digit_row(int start, int n) {
  assert(start > 0);
  assert(n > 0);
  for (int i = start; i < start+n; ++i) {
    printf("%3d", i);
  }

}

// requires n is an odd number from 3 to 99 inclusive
void pyramid(int n) {
  assert(n % 2 == 1);
  assert(n >= 3 && n <= 99);
  int maxline = (n + 1) / 2;

  for (int i = 1; i <= maxline; i++) {
    digit_row(i,i);
    printf("\n");
  }
  for (int i = maxline - 1; i > 0; i--) {
    digit_row(i,i);
    printf("\n");
  }
}

int main(void) {
  pyramid(7);
  pyramid(33);
}

//expect:
//1
//2 3
//3 4 5
//4 5 6 7
//3 4 5
//2 3
//1
