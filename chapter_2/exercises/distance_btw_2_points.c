// The program is to find distance between two co-ordinate points in nautical miles.
#include <stdio.h>
#include <math.h>

int main()
{
    double distance, L1, L2, G1, G2, deg_to_rad;
    deg_to_rad = 0.017453292519943295;
    printf("Enter the respective values of L1, L2, G1, G2 : ");
    scanf("%lf %lf %lf %lf", &L1, &L2, &G1, &G2);
    distance = 3440.0 * acos(sin(deg_to_rad*L1)*sin(deg_to_rad*L2) + cos(L1*deg_to_rad)*cos(deg_to_rad*L2)*cos(deg_to_rad*G2-deg_to_rad*G1));
    printf("Distance in Nautical Miles is : %lf", distance);
    return 0;
}