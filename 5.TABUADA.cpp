#include <stdio.h>

int main() {
  int i, num, mul;

  num = 5;

  for (i = 1; i <= 10; i++) {
    mul = num * i;

    printf("%d x %d = %d\n", num, i, mul);
  }

  return 0;
}