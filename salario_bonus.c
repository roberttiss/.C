#include <stdio.h>
 
int main() {
 
    char nome;
    double salario;
    double vendas;

    scanf("%s", & nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2f\n",(vendas * 0.15) + salario);

    return 0;
}