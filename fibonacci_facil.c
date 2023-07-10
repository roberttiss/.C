#include <stdio.h>

int main(){
    int contador;
    scanf("%d",&contador);
    int a;
    int x = 0;
    int y = 1;

    if (contador > 0 && contador < 46)
    {
        printf("%d ",x);
        contador--;

        while (contador > 0)
        {
            if(contador == 1){
                printf("%d\n",y);
                contador--;
            }

            else{
                printf("%d ",y);

                a = x + y;
                x = y;
                y = a;

                contador--;
            }
        }
        
    }
    

}