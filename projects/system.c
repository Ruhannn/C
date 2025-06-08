#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // srand(); 1804289383
  // srand(5); 590011675
  srand(time(NULL));
  int n = rand();
  // 
  printf("%d", n);

  return 0;
}
