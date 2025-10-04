// This program is to calculate Gross salary of Ramesh

#include <stdio.h>

int main()
{
  float bs, da, hra, gross;
  printf("Enter the Base pay of Ramesh :\n");
  scanf("%f",&bs);
  gross = (bs + (bs*0.4) + (bs*0.2)) ;
  printf("Ramesh's gross salary is: %f", gross);
  return 0;
}