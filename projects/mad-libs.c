#include <stdio.h>
#include <string.h>

int main() {

  char noun[50] = "";
  char verb[50] = "";
  char adj1[50] = "";
  char adj2[50] = "";
  char adj3[50] = "";

  // * adj1
  printf("enter your adjective (description): ");
  fgets(adj1, sizeof(adj1), stdin);
  adj1[strlen(adj1) - 1] = '\0';

  // ? noun
  printf("enter a noun (animal or person): ");
  fgets(noun, sizeof(noun), stdin);
  noun[strlen(noun) - 1] = '\0';

  // * adj2
  printf("enter a adj (description): ");
  fgets(adj2, sizeof(adj2), stdin);
  adj2[strlen(adj2) - 1] = '\0';

  // ! verb
  printf("enter a verb (ends with 'ing'): ");
  fgets(verb, sizeof(verb), stdin);
  verb[strlen(verb) - 1] = '\0';

  // * adj3
  printf("enter a adj (description): ");
  fgets(adj3, sizeof(adj3), stdin);
  adj3[strlen(adj3) - 1] = '\0';

  //   printf("%s\n %s\n %s\n %s\n %s\n", noun, verb, adj1, adj2, adj3);

  printf("\ni love when u %s", adj1);
  printf("\ni dont know %s,but i like", noun);
  printf("\numm its a shame to go %s", adj2);
  printf("\ni was %s,today", verb);
  printf("\njust leave %s", adj3);

  return 0;
}
