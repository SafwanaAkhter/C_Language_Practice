#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    int d;
    scanf("%d",&d);
    int diff = (a*b);
    int diff1= (c*d);
    int diff2= diff-diff1;
    printf("DIFFERENCE = %d \n",diff2);
    return 0;
}
