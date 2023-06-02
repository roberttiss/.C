#include <stdio.h>
 
int main() {
 
    int cod1,num1; double valor1;
    int cod2,num2; double valor2;

    scanf("%d",&cod1);
    scanf("%d",&num1);
    scanf("%lf",&valor1);
    scanf("%d",&cod2);
    scanf("%d",&num2);
    scanf("%lf",&valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n",(num1 *valor1) + (num2 * valor2));
 
    return 0;
}