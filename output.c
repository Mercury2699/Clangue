#include <stdio.h>

void exchange (int *a, int *b);

int main(void) {
  int a, b;
  a = 5;
  b = 7;
  printf("In main: ");
  printf("a = %d, b = %d\n", a, b);
  exchange(&a, &b);
  printf("a = %d, b = %d\n", a, b);
}

void exchange (int *pa, int *pb) {
  int temp;
  temp = *pa;
  *pa = *pb;
  *pb = temp;
  printf("In exchange: ");
  printf("a = %d, b = %d\n", *pa, *pb);
}

// Immediately after "In exchange: " is printed:
//_________________________________________________
//<exchange>:
//<pa>: <&a>
//<pb>: <&b>

//<temp>:<5>

//return addr: <main> : <11>
//_________________________________________________
//<main>:

//<a>:<5>
//<b>:<7>

//return addr: OS
//_________________________________________________