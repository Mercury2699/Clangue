#include <stdio.h>

void consecutivechar(void){
  char a, b;
  int rv1 = scanf(" %c", &a);
  int rv2 = scanf(" %c", &b);
  if ((rv1 != 1 )||(rv2 != 1)) {
    return;
  }
  while(1) {
    a = b;
    rv2 = scanf(" %c", &b);
    if ((rv1 != 1 )||(rv2 != 1)) {
      break;
    }
    if (a == b) {
      printf("%c%c",a ,b); 
      return;
    } else if (((a<='z')&&(a>='a'))&&((b<='Z')&&(b>='A'))) { 
      if (a == (b - 'A' + 'a')) {
        printf("%c%c",a ,b);
        return;
      }
    } else if (((a<='Z')&&(a>='A'))&&((b<='z')&&(b>='a'))) { 
      if (b == (a - 'A' + 'a')) {
        printf("%c%c",a ,b);
        return;
      }
    }
  }
}

int main(void) {
  consecutivechar();
  return 0;
}