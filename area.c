#include <stdio.h>
 
int main() {
 
    double A,B,C,pi;
    double a,b,c,d,e;

    scanf("%lf %lf %lf",&A,&B,&C);
    pi = 3.14159;

    a = (A * C) / 2;
    b = pi * (C * C);
    c = ((A + B) * C)/2;
    d = B * B;
    e = A * B;

    printf("TRIANGULO: %.3lf\n",a);
    printf("CIRCULO: %.3lf\n",b);
    printf("TRAPEZIO: %.3lf\n",c);
    printf("QUADRADO: %.3lf\n",d);
    printf("RETANGULO: %.3lf\n",e);
 
    return 0;
}