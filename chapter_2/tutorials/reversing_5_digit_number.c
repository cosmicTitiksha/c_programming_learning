// This program is to reverse the 5 digit number
#include <stdio.h>

int main()
{
  int a, b , c, d, e, num, reverse_num;
  printf("Enter the 5-digit number, you want to reverse : ");
  scanf("%d", &num);
  a = num % 10;
  num = num / 10;
  b = num % 10;
  num = num / 10;
  c = num % 10;
  num = num / 10;
  d = num % 10;
  num = num / 10;
  e = num;
  reverse_num = a*10000 + b*1000 + c*100 + d*10 + e;
  printf("The reversed number is : %d", reverse_num);
  return 0;
}