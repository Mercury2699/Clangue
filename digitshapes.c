#include <stdio.h>
#include <assert.h>

void digit_row(int start, int width) {
  for (int curr = start, count = 0; count< width; ++count, ++curr) {
    if (curr == 10) {
      curr = 0; 
    }
    printf("%d",curr);
  }
  printf("\n");
}

void digit_box(int height, int width) {
  assert(height > 2);
  assert(width > 2);
  for (int i = 1; i <= height; ++i) {
    if ((i == 1) || (i == height)){
      digit_row(i, width);
    } else {
      for (int j = 1; j <= width; ++j) {
        if (j == 1) {
          printf("%d",i);
        } else if (j == width) {
          printf("%d\n",i+1);
        } else {
          printf(" ");
        }
      }
    }
  }
}

void space_row(int n){
  for(;n > 0; --n){
    printf(" ");
  }
}

void digit_diamond(int n) {
  assert(n % 2 == 1);
  for (int i = 0; i < n; ++i) {
    space_row(n - 1 - i);
    digit_row(i + 1, 2 * i + 1);
  }
  for (int i = n - 2; i >= 0; --i) {
    space_row(n - 1 - i);
    digit_row(i + 1, 2 * i + 1);
  }
}

int main(void) {
  digit_box(3,3);
  digit_box(4,12);
  digit_diamond(3);
  digit_diamond(7);
}

