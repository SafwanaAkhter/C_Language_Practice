#include<stdio.h>
int main()
{
    char name[40];
    scanf("%s", name);
    double salary,total_sold_value;
    scanf("%lf %lf",&salary,&total_sold_value);
    double n_salary= total_sold_value * 0.15;
    double f_salary= n_salary + salary;
    printf("TOTAL = R$ %.2lf\n",f_salary);

}
