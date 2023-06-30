#include <stdio.h>

int main(){
    int contador = 0;
    int contador2;
    int a;
    int maior = 0;

    while (contador < 100)
    {
        contador++;
        scanf("%d",&a);
        if(a > maior){
            maior = a;
            contador2 = contador;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",contador2);
    return 0;
}