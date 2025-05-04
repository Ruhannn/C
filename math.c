#include <math.h>
#include <stdio.h>
int main() {
  int x = 25;
  int y = 3;
  int r = 0;

  //  ! basic
  // r = x + y;
  // r = x - y;
  // r = x * y;
  // r = x * y;
  // r = x / y; // ? need to be float
  // r = x % y;

  // ! simplify
  // x +=2;
  // x -=3;
  // x *=3;
  // x /= 2;

  // ! math functions
  // * abs - to + like - 5 to +5
  // * cbrt cube root like 64 to 4
  // * ceil return greater like 1.1 to 2
  // * floor return less like 1.9 to 1
  // * fmax return the maximum value like (1,2) to 2
  // * fmin return the minimum value like (1,2) to 1
  // * pow returns (num1)^num2 like 2,3 to 8
  // * round return the closest full number like 1.1 to 1 & 1.6 to 2
  // * sqrt root like 25 to 5
  // * trunc remove the the points like 1.5 to 1
  // * log get log of any number
  // * log10 get the base 10 log of any number
  // * log1p get the log (1 + any number)
  // * log2 get the base 2 log of any number
  x = log(x);
  printf("%d", x);
}
