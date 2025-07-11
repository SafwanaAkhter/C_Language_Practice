#include<stdio.h>
int main()
{
    int sec;
    scanf("%d",&sec);

    int  hours=sec/3600;
    int minites=(sec%3600)/60;
    int seconds= sec%60;

    printf("%d:%d:%d\n",hours,minites,seconds);


}
