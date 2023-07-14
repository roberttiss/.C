#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int contador = 1;

    if(n > 0 && n < 10000){
        while (contador <= 10000){
            if(contador % n == 2){
            printf("%d\n",contador);
        }
        contador += 1;
        }       
    }
    return 0;
}
