// This program is to count the number of number of notes needed for rs. 100, rs. 50, rs. 10, rs. 5, rs. 2, rs. 1

#include <stdio.h>

int main()
{
  int money, rs_100, rs_50, rs_10, rs_5, rs_2, rs_1;
  printf("Enter the price : ");
  scanf("%d", &money);
  rs_100 = money / 100;
  money = money % 100 ;
  rs_50 = money / 50;
  money = money % 50;
  rs_10 = money / 10;
  money = money % 10;
  rs_5 = money / 5;
  money = money  % 5;
  rs_2 = money / 2;
  money = money  % 2;
  rs_1 = money;
  printf("Number of 100-rupee notes : %d\n", rs_100);
  printf("Number of 50-rupee notes : %d\n", rs_50);
  printf("Number of 10-rupee notes : %d\n", rs_10);
  printf("Number of 5-rupee notes : %d\n", rs_5);
  printf("Number of 2-rupee notes : %d\n", rs_2);
  printf("Number of 1-rupee notes : %d\n", rs_1);
  return 0;
}