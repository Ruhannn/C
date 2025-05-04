#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getComputerChoice() {
  srand(time(NULL));
  return (rand() % 3) + 1;
}

int getUserChoice() {
  int userChoice = 0;

  printf("1.rock\n");
  printf("2.paper\n");
  printf("3.scissors\n");
  printf("chose: ");
  scanf("%d", &userChoice);
  return userChoice;
}

int main() {
  printf("*** rock-paper game ***\n");
  int computerChoice = 1;
  int userChoice = getUserChoice();

  while (1) {

    printf("computer chose %d\n", computerChoice);
    // validation
    if (userChoice > 3 || userChoice == 0) {
      printf("select valid option");
      break;
    }

    // tie
    if (userChoice == computerChoice) {
      printf("tie!");
      break;
    }

    // wins
    if (userChoice == 1 && computerChoice == 3 ||
        userChoice == 2 && computerChoice == 1 ||
        userChoice == 3 && computerChoice == 2) {
      printf("u win!");
      break;
    }

    // lose
    printf("you lose!");
    break;
  }

  return 0;
}
