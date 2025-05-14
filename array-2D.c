#include <stdio.h>

int main() {
  int numbers[][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

  // printf("%d ", numbers[0][0]);
  // printf("%d ", numbers[0][1]);
  // printf("%d \n", numbers[0][2]);

  // printf("%d ", numbers[1][0]);
  // printf("%d ", numbers[1][1]);
  // printf("%d \n", numbers[1][2]);

  // printf("%d ", numbers[2][0]);
  // printf("%d ", numbers[2][1]);
  // printf("%d \n", numbers[2][2]);

  // int size = sizeof(numbers);
  // int sizee = sizeof(numbers[0]);
  // int sizeee = sizeof(numbers[0][0]);
  // printf("%d\n%d\n%d\n", size, sizee, sizeee);

  for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {         // ! rows
    for (int j = 0; j < sizeof(numbers[0]) / sizeof(numbers[0][0]); j++) { // ! columns
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }
  return 0;
}
