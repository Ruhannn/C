#include <stdbool.h>
#include <stdio.h>

int main()
{
    // ? whole number (4 bytes in morder system) %d
    int age = 18;
    int year = 2006;
    float gpa = 4.0;

    // ? single character (1 bytes) %c
    char grade = 'A';
    //  ['r', 'u', 'h', 'a', 'n', '\0']
    /*
    ? array of character
    ! (length + 1[for \0 bytes]) for example here is (5+1)=6 bytes %s
    * ['r', 'u', 'h', 'a', 'n', '\0']
    */
    char name[] = "ruhan";

    // ? double-precision decimal number (8 bytes :0) %lf
    double PI = 3.141592653589793;

    // ? true oe false , 1 or 0 (1 bytes, requires <stdbool.h>)
    bool isMarried = false;

    printf("you are %d years old (%d)\n", age, year);
    printf("your gpa is %.0f (%c)\n", gpa, grade);

    printf("you are %s\n", name);
    printf("the value of PI is %.15lf\n", PI);

    printf("%s", isMarried ? "woah be happy <3" : "ummmmmm 0_0");

    return 0;
}
