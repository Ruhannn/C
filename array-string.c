#include <stdio.h>

int main() {
  char hehe[][10] = {"ruhan", "kami", "mon","hehe"};

  for (int i = 0; i < sizeof(hehe) / sizeof(hehe[0]); i++) {
    printf("%s ", hehe[i]);
  }

  return 0;
}
