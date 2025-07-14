#include<stdio.h>
int main()
{
    double x1,x2,x3,x4;
    scanf("%lf %lf %lf %lf",&x1,&x2,&x3,&x4);
    double n;
    scanf("%lf",&n);

    double avg= (x1*2 +x2*3 +x3*4+x4*1)/10;
    printf("Media: %.1lf\n",avg);
    if(avg>=7){
        printf("Aluno aprovado.\n");
    }
    else if(avg<5){
        printf("Aluno reprovado.\n");
    }
    else{
            printf("Aluno em exame.\n");
    printf("Nota do exame: %.1lf\n",n);
    double avg1= (avg+n)/2;
    if(avg1>=5){

        printf("Aluno aprovado.\n");
    }
    else if(avg1<5){
        printf("Aluno reprovado.\n");
    }
    else{
        return 0;
    }
    printf("Media final: %.1lf\n",avg1);

    }




}
