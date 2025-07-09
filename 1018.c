#include<stdio.h>
int main(){
 int x;
 scanf("%d",&x);
 printf("%d\n",x);

 int x1=x/100;
 printf("%d nota(s) de R$ 100,00\n",x1);
 x=x%100;

 int x2=x/50;
 printf("%d nota(s) de R$ 50,00\n",x2);
 x=x%50;

 int x3=x/20;
 printf("%d nota(s) de R$ 20,00\n",x3);
 x=x%20;

 int x4=x/10;
 printf("%d nota(s) de R$ 10,00\n",x4);
 x=x%10;

 int x5=x/5;
 printf("%d nota(s) de R$ 5,00\n",x5);
 x=x%5;

 int x6=x/2;
 printf("%d nota(s) de R$ 2,00\n",x6);
 x=x%2;

 int x7=x/1;
 printf("%d nota(s) de R$ 1,00\n",x7);
 x=x%1;

}
