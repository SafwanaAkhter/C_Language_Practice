#include<stdio.h>
int main()
{
    int v,t;
    scanf("%d %d",&v,&t);

    double s = v*t;
    double fuel_spent = s/12;

    printf("%.3lf\n",fuel_spent);
}
