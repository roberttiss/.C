#include <stdio.h>

double calculo(double a);

int main(){
    double n;
    scanf("%lf",&n);

    calculo(n);
    return 0;
}

double calculo(double a){
    if(a < 0 || a > 100.00)
    {
        printf("Fora de intervalo\n");
    }
    else{
        if(a <= 25.00)
    {
        printf("Intervalo [0,25]\n");
    }
    else{
        if(a <= 50.00)
    {
        printf("Intervalo (25,50]\n");
    }
    else{
        if(a <= 75.00)
    {
        printf("Intervalo [50,75]\n");
    }
    else{
        if(a <= 100.00)
    {
        printf("Intervalo (75,100]\n");
    }
    }
    }
    }
    }
    return 0;
}
