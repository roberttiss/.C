#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int contador = 1;
        if(x >= 0 && x <= 1000){
            while (contador <= x)
            {
                printf("%d\n",contador);
                contador += 2;
            }
        }
    
}