#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {
  int choice = 0;
  float balance = 0.0f;
  printf("welcome to kamibank");
  do {
    printf("\nselect an option:\n");
    printf("\n1.check balance\n");
    printf("2.deposit money\n");
    printf("3.withdraw money\n");
    printf("4.exit\n");
    printf("\nenter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      checkBalance(balance);
      break;
    case 2:
      balance += deposit();
      break;
    case 3:
      balance -= withdraw(balance);
      break;
    case 4:
      printf("goodbye");
      break;
    default:
      printf("\ninvalid choice! plz select 1-4");
    }
  } while (choice != 4);
  return 0;
}
void checkBalance(float balance) { printf("you have $%.2f\n", balance); }
float deposit() {
  float amount = 0.0f;

  printf("\nenter amount to deposit: $");
  scanf("%f", &amount);

  if (amount < 0) {
    printf("invalid amount\n");
    return 0.0f;
  } else {
    printf("successfully deposited $%.2f\n", amount);
    return amount;
  }
}
float withdraw(float balance) {
  float amount = 0.0f;
  printf("enter amount to withdraw: $");
  scanf("%f", &amount);

  if (amount < 0) {
    printf("invalid amount\n");
    return 0.0f;
  } else if (amount > balance) {
    printf("shus broki , you have $%f\n", balance);
  } else {
    printf("successfully withdrew $%.2f\n", amount);
    return amount;
  }
}
