#include <math.h>
#include <stdio.h>
#define PI 3.141592653589793
int main() {
  double redis = 0.0;
  double surfaceArea = 0.0;
  double volume = 0.0;
  double area = 0.0;

  printf("enter the redis: ");
  scanf("%lf", &redis);

  area = PI * pow(redis, 2);
  surfaceArea = 4 * area;
  volume = (4.0 / 3.0) * area;
  printf("area : %.2lf\n", area);
  printf("surface area : %.2lf\n", surfaceArea);
  printf("volume : %.2lf\n", volume);

  return 0;
}
