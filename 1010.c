#include<stdio.h>
int main()
{

    int code,product1_unit;
    double product1_price_per_unit;
    scanf("%d %d %lf",&code,&product1_unit,&product1_price_per_unit);

    double product1_price= product1_unit*product1_price_per_unit;

    int product2_unit;
    double product2_price_per_unit;
    scanf("%d %d %lf",&code,&product2_unit,&product2_price_per_unit);

    double product2_price= product2_unit*product2_price_per_unit;

    double total_price= product1_price + product2_price;

    printf("VALOR A PAGAR: R$ %.2lf\n",total_price);
}
