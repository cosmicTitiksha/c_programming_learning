#include <stdio.h>
int main()
{
    float a=5, b=2;
    int c,d;
    // c = a%b;  This line will cause problems because remainder operation won't be performmed among floats
    d = a/2;
    printf("%d\n", d);
    return 0;
}