#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);

    int year=days/365;
    int totaldays=days%365;

    int month=totaldays/30;
    int day=totaldays%30;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year, month,day);
}
