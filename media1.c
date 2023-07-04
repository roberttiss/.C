#include <stdio.h>

double media(double a, double b);

int main(int argc, char const *argv[])
{
    double result,nota1,nota2;
    
    scanf("%lf %lf",&nota1,&nota2);

    result = media( nota1,nota2);
    printf("MEDIA = %.5lf\n",result);
    return 0;
}


double media (double a, double b){
    return (a * 3.5 + b * 7.5) / 11;

}