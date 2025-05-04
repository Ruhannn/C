#include <stdio.h>

int main() {
  int num1 = 1;
  int num2 = 10;
  int num3 = 100;

  printf("%04d\n", num1);
  printf("%4d\n", num2);
  printf("%-8d%d\n", num3, num3);
  printf("%+d\n", num3);
  return 0;
}
