#include <stdio.h>

int main(){
int age = 18;
int year = 2006;
float gpa = 4.0;

char grade = 'A';
char name[] = "ruhan";

double PI = 3.141592653589793;

printf("you are %d years old (%d)\n", age, year);
printf("your gpa is %.0f (%c)\n", gpa, grade);
printf("you are %s\n", name);
printf("the value of PI is %.15lf", PI);

    return 0;
}
