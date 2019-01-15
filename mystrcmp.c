#include <assert.h>
#include <stdio.h>
#include <stdbool.h>


bool my_strcmp(char * a, char * b) {
  while((*a != '\0') || (*b != '\0')) {
    if (*a != *b) return 0;
    a++;
    b++;
  }
  return 1;
}

int main(void) {
  assert(my_strcmp("abcde","abcd") == 0);
  assert(my_strcmp("abcd","abcd") == 1);
  assert(my_strcmp("speed","speedy") == 0);
}
