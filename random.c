#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  //   printf("%d", RAND_MAX);
  int min = 1;
  int max = 3000;
  int randomNum = (rand() % (max - min) + 1) + min; //(ran() % 2) +1
  printf("%d\n", randomNum);
  return 0;
}
