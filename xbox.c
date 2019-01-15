#include <stdio.h>
#include <assert.h>

void xbox(int n) {
  assert(n % 2 == 1);
  int a = n + 2;
  for(int i = 0; i<a; ++i) {
    for (int j= 0; j < a; ++j) {
      if ((i == 0)||(j==0)||(i==a-1)||(j==a-1)) {
        printf("*");
      } else if ((i == j)||(i+j==a-1)) {
        printf("X");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}


int main(void){
  xbox(1);
  xbox(3);
  xbox(5);
  return 0;
}