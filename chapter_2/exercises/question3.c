#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter values of a and b ");
    scanf(" %d %d ",&a, &b); //Doesn't behave right
    printf("a = %d b = %d", a, b);
    return 0;
}