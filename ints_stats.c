#include <stdio.h>

void ints_stats(int * sum, int * avg) {
  int count = 0;
  while (1){
    int n;
    int rv = scanf("%d",&n);
    if (rv != 1) {
      break;
    }
    *sum += n;
    ++count;
  }
  *avg = *sum / count;
}

int main(void) {
  int sum = 0;
  int avg = 0;
  ints_stats(&sum, &avg);
  printf("sum = %d\n", sum);
  printf("avg = %d\n", avg);
  return 0;
}