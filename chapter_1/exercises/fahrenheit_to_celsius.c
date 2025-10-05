// This program is used to convert temperature from Fahrenheit to Celsius

#include <stdio.h>
int main()
{
  float fah, cel;
  printf("Enter the temperature in fahrenheit : ");
  scanf("%f",&fah);
  cel = (fah - 32)*5/9;
  printf("%f fahrenheit = %f celsius", fah, cel);
  return 0;
}