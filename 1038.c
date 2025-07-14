#include<stdio.h>
int main(){
int code ,quantity;
scanf("%d %d",&code,&quantity);

if(code==1){
        double total=quantity*4.0;
    printf("Total: R$ %.2lf\n",total);
}
else if(code==2){
      double total=quantity*4.50;
    printf("Total: R$ %.2lf\n",total);
}
else if(code==3){
      double total=quantity*5.0;
    printf("Total: R$ %.2lf\n",total);
}
else if(code==4){
 double total=quantity*2.0;
    printf("Total: R$ %.2lf\n",total);
}
else if(code==5){
     double total=quantity*1.50;
    printf("Total: R$ %.2lf\n",total);
}
else{
    return 0;
}
}
