#include <stdio.h>

double calculo(double sala,double vendas);

int main(){
    char n;
    double s,v;
    scanf("%s",&n);
    scanf("%lf",&s);
    scanf("%lf",&v);

    printf("TOTAL = R$ %.2f\n",calculo(s,v));
    return 0;

}

double calculo(double sala,double vendas){
    double calculo = (vendas * 0.15) + sala;
    return calculo;
}