#include<stdio.h>
#define pi 3.14159
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    double triangle = 0.5*a*c;
    double circle = pi*c*c;
    double trapizium = 0.5*(a+b)*c;
    double square = b*b;
    double rectangle = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapizium,square,rectangle);
}
