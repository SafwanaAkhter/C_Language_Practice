#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf ",&a,&b);
    double c;
    scanf("%lf",&c);
    double avg= ((a*2)+(b*3)+(c*5))/10;
    printf("MEDIA = %.1lf\n",avg);
    return 0;
}
