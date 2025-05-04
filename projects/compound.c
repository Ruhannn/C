// a =p(1+r/n)^t
#include <math.h>
#include <stdio.h>

int main() {
  double p = 0.0;
  double r = 0.0;
  int t = 0;
  int n = 0;
  double total = 0.0;

  printf("A=P(1+r/n)^nt\n");
  // !  p
  printf("enter P: ");
  scanf("%lf", &p);
  // ! r
  printf("enter R: ");
  scanf("%lf", &r);
  r = r / 100;
  // ! t
  printf("enter T: ");
  scanf("%d", &t);
  // ! n
  printf("enter N: ");
  scanf("%d", &n);

  total = p * pow(1 + (r / n), n * t);

  printf("after %d years, the total will be $%.2lf\n", t, total);
  return 0;
}
