#include <stdio.h>

int main(void) {
  for (int i = 'C'; i >= 'A'; --i) {
    for (int j = 'C'; j >= 'A'; --j) {
      for (int k = 'C'; k >= 'A'; --k) {
        printf("%c%c%c\n",i,j,k);
      }
    }
  }
}