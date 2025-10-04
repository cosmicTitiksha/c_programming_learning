// This program is to calculate aggregate and percentage of marks obtained by a student , where each subject's max score is 100

#include <stdio.h>

int main()
{
  int m1, m2, m3, m4, m5, aggr;
  float per;
  printf("Enter the space seperated values of marks in 5 different subjects : \n");
  scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
  aggr = m1 + m2 + m3 + m4 + m5;
  per = aggr / 5;
  printf("The aggregate marks of 5 subjects is : %d\n", aggr);
  printf("The percentage obtained in 5 subjects is : %f\n", per);
  return 0;
}