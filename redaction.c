#include <stdio.h>

int main(void){
  char c;
  while (1){
    int rv = scanf("%c",&c);
    if (rv != 1) {break;}
    if ((c >= 'a') && (c <= 'z')) {
      printf("x");
    } else if ((c >= 'A') && (c <= 'Z')) {
      printf("X");
    } else if ((c >= '0') && (c <= '9')) {
      printf("#");
    } else {
      printf("%c", c);
    }
  }
}