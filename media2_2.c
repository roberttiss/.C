#include <stdio.h>

double ponderada(double a, double b, double c);

int main(int argc, char const *argv[])
{
    double result,A,B,C;

    scanf("%lf %lf %lf",&A,&B,&C);

    result = ponderada( A, B, C);
    printf("MEDIA = %.1lf\n",result);
    return 0;
}


double ponderada (double a, double b, double c){
    return (a * 2 + b * 3 + c * 5) / (2+3+5);

}