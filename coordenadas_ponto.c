#include <stdio.h>

double quadrante(double x, double y);

int main()
{
    double a,b;

    scanf("%lf %lf",&a,&b);

    quadrante(a,b);
    return 0;
}

double quadrante(double x, double y){
     if(x == 0 && y == 0){
        printf("Origem\n");
     }
     else if(x == 0){
        printf("Eixo Y\n");
     }
     else if(y == 0){
        printf("Eixo X\n");
     }
     else if(x > 0 && y > 0){
        printf("Q1\n");
     }

     else if(x < 0 && y > 0){
        printf("Q2\n");
     }
     else if(x < 0 && y < 0){
        printf("Q3\n");
     }
     else if(x > 0 && y <0){
        printf("Q4\n");
     }
}


