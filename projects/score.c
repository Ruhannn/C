#include <stdio.h>

int main() {
  int scores[5] = {0};
  int size = sizeof(scores) / sizeof(scores[0]);

  for (int i = 0; i < size; i++) {
    do {
      printf("enter a score for %d: ", i + 1);
      scanf("%d", &scores[i]);
    } while (scores[i] < 0);
  }

  printf("your scores\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", scores[i]);
  }

  return 0;
}


