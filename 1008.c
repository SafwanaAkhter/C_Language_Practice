#include<stdio.h>
int main()
{
    int num;
     double working_hours;
    scanf("%d %lf",&num,&working_hours);
    double amount;
    scanf("%lf",&amount);
     double salary= working_hours*amount;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,salary);

}
