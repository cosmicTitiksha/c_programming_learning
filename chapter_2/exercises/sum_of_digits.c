// Calculating the sum of digits of a 5-digit number
#include <stdio.h>
int main()
{
    int num, a, b, c, d, e, sum_digits;
    printf("Enter the number : ");
    scanf("%d", &num);
    a = num /10000;
    num = num % 10000;
    b = num/1000;
    num = num%1000;
    c = num/100;
    num = num%100;
    d = num/10;
    num = num%10;
    e = num;
    sum_digits = a+b+c+d+e;
    printf("Sum of digits of %d is %d", num, sum_digits);
    return 0;
}