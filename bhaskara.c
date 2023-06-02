#include <stdio.h>
#include <math.h>

void calculo(double a,double b,double c);

int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    calculo(A,B,C);
    return 0;
}

void calculo(double a,double b,double c){
    double delta = (b*b) - (4*a*c);

    if (delta < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else{
        double r1=((-b)+(sqrt(delta))) / (2*a);
        double r2=((-b)-(sqrt(delta))) / (2*a);
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
}