#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int x=1;
    int quadrado;

    while (x <= n)
    {
        if(x % 2 == 0){

            quadrado = x * x; 
            printf("%d^2 = %d\n",x,quadrado);
        }

        x++;
    }
    
}