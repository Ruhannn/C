#include <stdio.h>

int main()
{

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.2f\n", price1);
    printf("%.1f\n", price2);
    printf("%+f\n", price3);

    return 0;
}
