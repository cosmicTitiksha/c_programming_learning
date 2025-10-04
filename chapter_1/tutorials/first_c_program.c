// This is the first C program - Calculating 'Simple Interest' when principal, rate of interest and number of years is given


#include <stdio.h>
int main()
{
  int p, n;
  float r, si;
  p = 1000;
  n = 3;
  r = 8.5;
  // formula to calulate simple interest
  si = (p*n*r)/100;
  printf("%f\n", si);
  return 0;
}