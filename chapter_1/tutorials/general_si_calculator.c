// This program calculates the Simple Interest by saking for user input every freaking time
#include <stdio.h>

int main()
{
  int p, n;
  float r, si;
  printf("Enter the space seperated values of 'principal', 'rate of interest', and 'number of years' respectively:");
  scanf("%d %f %d", &p, &r, &n);
  // calculating simple interest
  si = (p*n*r)/100;
  printf("The simple Interest obtained is : %f", si);
  return 0;
}