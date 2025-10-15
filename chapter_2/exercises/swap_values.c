// The program is to swap values of two memory locations

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the values of a and b respectively : ");
    scanf("%d %d", &a, &b);
    printf("You entered : \na = %d\nb = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("Swapped values :\na = %d\nb = %d", a, b);
    return 0;
}