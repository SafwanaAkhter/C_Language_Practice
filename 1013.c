#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);

int greatest= (a+b+abs(a-b))/2;
int greatest1= (greatest+c+abs(greatest-c))/2;
printf("%d eh o maior\n",greatest1);
}
