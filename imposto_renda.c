#include <stdio.h>

double imposto(double n1);


int main()
{
    double salario;

    scanf("%lf",&salario);
  
    imposto(salario);
    
    return 0;
}

double imposto(double n1){
    double desconto;
    if(n1 <= 2000.00){
        printf("Isento\n");
    }
    else if(n1 <= 3000.00){
        desconto = (n1 - 2000.00) * 0.08;
        printf("R$ %.2lf\n",desconto);
    }
    else if(n1 <= 4500.00){
        desconto = (1000.00) * 0.08;
        desconto = desconto + (n1 - 3000.00) * 0.18;
        printf("R$ %.2lf\n",desconto);
    }
    else{
        desconto = 1000.00 * 0.08 + 1500.00 * 0.18;
        desconto = desconto + (n1 - 4500.00) * 0.28;
        printf("R$ %.2lf\n",desconto);
    }
    
}