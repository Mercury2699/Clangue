#include <stdio.h>
#include <assert.h>

void count_digits(int num) {
  assert(num > 0);
  for (int i = 0; i < 10; i++) {
    int rem;
    int cnt = 0;
    int n = num;
    while (n > 0) {
      rem = n % 10;
      if (rem == i) {
        ++cnt;
      }
      n /= 10;
    }
    printf("The digit %d appeared %d time(s) in %d\n", i, cnt, num);
  }
}

int countdigitsr(int n) {
  assert(n >= 0);
  if (n < 10) {
    return 1;
  } else {
    return 1+countdigitsr(n/10);
  }
}

int countdigitsi(int n) {
  assert(n >= 0);
  int count = 1;
  for (;n > 10; n/=10) {
    ++count;
  }
  return count;
}

int get_digits(int n, int k) {
  for (; k > 0; --k) {
    n /= 10;
  }
  return n % 10;
}

int no_dup(int n) {
  int used[10]={0};
  int curr = n;
  for (;n > 0; n /= 10) {
    curr = n % 10;
    if (used[curr]) {
      return 0;
    }
    used[curr]=1;
  }
  return 1;
}

int main(void) {
  count_digits(347213);
  assert(countdigitsi(1)==countdigitsr(1));
  assert(countdigitsi(2147483647)==countdigitsr(2147483646));
  assert(get_digits(456, 0)==6);
  assert(get_digits(456, 2)==4);
  assert(get_digits(456, 3)==0);
  assert(no_dup(123456789) == 1);
  assert(no_dup(2147483647) == 0);
}