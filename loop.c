#include <stdio.h>
#include <string.h>

int main() {
  int n = 0;
  //   while (n <= 7) {
  //     printf("I love Ayaka\n");
  //     scanf("%d", &n);
  //   }
  //   do {
  //     printf("guess 9:");
  //     scanf("%d", &n);
  //   } while (n <= 9);
  char name[50] = "";

  printf("name plz: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  while (strlen(name) == 0) {
    printf("bruhhh :");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
  }

  printf("hello %s", name);
  return 0;
}
