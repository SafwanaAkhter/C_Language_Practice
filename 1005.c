#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    double b;
    scanf("%lf",&b);
    double avg = ((a*3.5)+(b*7.5))/11;
    printf("MEDIA = %.5lf\n",avg);
    return 0;

}
