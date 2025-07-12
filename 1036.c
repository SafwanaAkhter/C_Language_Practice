#include<stdio.h>
#include<math.h>
int main(){
double a ,b,c;
scanf("%lf %lf %lf",&a,&b,&c);

double det= (b*b)-(4*a*c);


if(a==0 || det<0 )
{
    printf("Impossivel calcular\n");
}
else
    {
    double x1= ((-b+sqrt(det))/(2*a));
    double x2= ((-b-sqrt(det))/(2*a));
    printf("R1 = %.5lf\n",x1);
    printf("R2 = %.5lf\n",x2);
    }
}
