// This program is to calculate wind chill factor
#include <stdio.h>
#include <math.h>

int main()
{
    float v, t, wcf;
    printf("Enter the wind chill temperature(F) and wind velocity(mph) respectively : ");
    scanf("%f %f", &t, &v);
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v, 0.16) ;
    printf("The wind chill factor for air chill temperature %f and wind velocity %f is %f", t, v, wcf);
    return 0;
}