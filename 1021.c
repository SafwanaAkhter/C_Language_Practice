#include<stdio.h>
int main()
{
  double x;
  scanf("%lf",&x);

printf("NOTAS:\n");

int x1=x/100;
printf("%d nota(s) de R$ 100.00\n",x1);
x=x-100*x1;


int x2=x/50;
printf("%d nota(s) de R$ 50.00\n",x2);
x=x-50*x2;


int x3=x/20;
printf("%d nota(s) de R$ 20.00\n",x3);
x=x-20*x3;


  int x4=x/10;
printf("%d nota(s) de R$ 10.00\n",x4);
x=x-10*x4;


  int x5=x/5;
printf("%d nota(s) de R$ 5.00\n",x5);
 x=x-5*x5;


  int x6=x/2;
printf("%d nota(s) de R$ 2.00\n",x6);
x=x-2*x6;


 printf("MOEDAS:\n");

  int x7=x/1;
printf("%d moeda(s) de R$ 1.00\n",x7);
 x=x-1*x7;

   int x8=x/0.50;
printf("%d moeda(s) de R$ 0.50\n",x8);
 x=x-0.50*x8;

   int x9=x/0.25;
printf("%d moeda(s) de R$ 0.25\n",x9);
 x=x-0.25*x9;

  int x10=x/0.10;
printf("%d moeda(s) de R$ 0.10\n",x10);
 x=x-0.10*x10;

   int x11=x/0.05;
printf("%d moeda(s) de R$ 0.05\n",x11);
 x=x-0.05*x11;

   int x12=x/0.01;
printf("%d moeda(s) de R$ 0.01\n",x12);
 x=x-0.01*x12;

}



