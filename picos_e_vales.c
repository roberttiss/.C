#include <stdio.h>

int main() {
  
    int paisagem, resultado = 1;
    int h1, h2, h_pico;

    scanf("%d",&paisagem);

    if (paisagem == 2) 
    {
        scanf("%d",&h2);
        scanf("%d",&h1);
        printf("%d\n", !(h1 == h2));
    } 
    else 
    {
        scanf("%d",&h2);
        scanf("%d",&h1);
        paisagem -= 2;
        h_pico = h1 > h2;

        while (paisagem > 0) 
        {
            h2 = h1;
            scanf("%d",&h1);
            paisagem--;
            
            if (resultado == 1) 
            {
                if (h_pico == 1) 
                {
                    resultado = h1 < h2 ;
                    h_pico = 0;
                } 
                else 
                {
                    resultado = h1 > h2;
                    h_pico = 1;
                }
            }
        }

        printf("%d\n",resultado);
    }

    return 0;
}
