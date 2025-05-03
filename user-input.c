#include <stdio.h>
#include <string.h>
int main() {
  int age = 0;
  float gpa = 0.0f;
  char grade = '\0';
  char name[30] = "";

  printf("enter your age: ");
  scanf("%d", &age);

  printf("enter your gpa: ");
  scanf("%f", &gpa);

  printf("enter your grade: ");
  scanf(" %c", &grade); //! input buffer error give space to fix

  getchar();
  printf("enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("%d\n", age);
  printf("%f\n", gpa);
  printf("%c\n", grade);
  printf("%s\n", name);

  return 0;
}
