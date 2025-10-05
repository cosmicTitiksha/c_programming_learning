// This program is written to generate perimeter and area of rectangle and circumference and area of a circle

#include <stdio.h>

int main()
{
  int l, b , r, area_r, per_r;
  float area_c, cir_c;
  printf("Enter the length and breadth for rectangle respectively : ");
  scanf("%d %d",&l, &b);
  area_r = l*b;
  per_r = 2*(l+b);
  printf("Enter the radius of circle : ");
  scanf("%d",&r);
  area_c = 3.14159*r*r;
  cir_c = 2*3.14159*r;
  printf("The area of rectangle is : %d\n", area_r);
  printf("The perimeter of rectangle is : %d\n", per_r);
  printf("The area of circle is : %f\n", area_c);
  printf("The circumference of circle is : %f\n", cir_c);
  return 0;
}