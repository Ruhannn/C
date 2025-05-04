#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int guess = 0;
  int tries = 0;
  int min = 1;
  int max = 100;
  int answer = (rand() % (max - min) + 1) + min;

  printf("*** NUMBER GAME ***\n");

  do {
    printf("guess a number between %d - %d: ", min, max);
    scanf("%d", &guess);
    tries++;

    if (guess < answer) {
      printf("too low!\n");
    } else if (guess > answer) {
      printf("too high!\n");
    } else {
      printf("u got it <3\n");
    }
  } while (guess != answer);

  printf("The answer is %d\n", answer);
  printf("its took u %d tries", tries);

  return 0;
}
