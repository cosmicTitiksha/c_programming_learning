// The program is to print trigonometric Ratios of an angle
#include <stdio.h>
#include <math.h>

int main()
{
    double deg, to_rad, sine, cosine, tangent, cotangent, secant, cosecant;
    printf("Enter the angle in degrees : ");
    scanf("%lf",&deg);
    to_rad = deg*3.141592653589793/180 ;
    sine = sin(to_rad);
    cosine = cos(to_rad);
    tangent = tan(to_rad);
    cotangent = 1/tan(to_rad);
    secant = 1/cos(to_rad) ;
    cosecant = 1/sin(to_rad);
    printf("Sine = %lf\n", sine);
    printf("Cosine = %lf\n", cosine);
    printf("Tangent = %lf\n", tangent);
    printf("Cotangent = %lf\n", cotangent);
    printf("Secant = %lf\n", secant);
    printf("Cosecant = %lf\n", cosecant);
    return 0;
}