#include <stdio.h>

int main(){
    int contador;
    scanf("%d",&contador);
    int x,y,a,b;
    int soma = 0;

    while (contador > 0)
    {
        scanf("%d%d",&x,&y);

        if(x > y){
            a = y;
            b=x;
        }
        else{
            a = x;
            b=y;
        }
       
    }
        return 0;
    }
    
