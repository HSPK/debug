#include <stdio.h>
#define PI 3.14159
int main() 
{
    double r,a,b;
    scanf("%lf",&r);
    a=2*PI*r;
    b=PI*r*r;
    printf("%.3lf\n",a);
    printf("%.3lf",b);
    return 0;
}