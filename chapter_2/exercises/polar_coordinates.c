// This program is used to convert Cartesian Co-ordinates(x,y) to polar co-ordinates(r, phi)
#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, r, phi;
    printf("Enter the respected space seperated values for x, y (x,y) : ");
    scanf("%lf %lf", &x, &y);
    r = sqrt(x*x + y*y);
    phi = atan2(y, x);
    printf("The value of (r, phi) is (%lf , %lf).", r, phi);
    return 0;
}