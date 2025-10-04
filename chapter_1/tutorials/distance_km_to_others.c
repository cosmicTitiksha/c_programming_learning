// This program is to convert distance from kilometers to meters, feet, inches and centimeters

#include <stdio.h>

int main()
{
  float km, m, feet, inch, cm;
  printf("Enter the distance in kilometers : \n");
  scanf("%f",&km);
  m = km*1000;
  feet = km*3280.84;
  inch = km*39370.1;
  cm = km*100000;
  printf("%f km is %f m.\n", km, m);
  printf("%f km is %f inches.\n", km, inch);
  printf("%f km is %f feet.\n", km, feet);
  printf("%f km is %f cm.\n", km, cm);
  return 0;
}