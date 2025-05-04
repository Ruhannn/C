#include <stdio.h>
#include <string.h>
int main() {

  char item[50] = "";
  float price = 0.0f;
  int quantity = 0;
  char currency = '$';
  float total = 0;

  printf("what item would u like to buy?: ");
  fgets(item, sizeof(item), stdin);
  item[strlen(item) - 1] = '\0';
  printf("what is the price of each?: ");
  scanf("%f", &price);
  printf("how many would u buy?: ");
  scanf(" %d", &quantity);

  total = price * quantity;
  printf("\nu have bought %d x '%s'\n", quantity, item);
  printf("total =%10c%.2f\n", currency, total);

  return 0;
}
