#include <stdio.h>

int main() {
  char hehe[] = {'r', 'u', 'h', 'a', 'n'};
  int hehen[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < sizeof(hehe) / sizeof(hehe[0]); i++) {
    // printf("%d \n", hehen[i]);
    printf("%c \n", hehe[i]);
  }
  return 0;
}
