#include <stdio.h> 
#define TRUE 1
#define FALSE 0

int main() {
    
    int pedidos, pessoas, temp;
    int contador = TRUE;

    while (contador == TRUE)
    {
        scanf("%d",&pedidos);

        if (pedidos == FALSE)
        {
            contador = FALSE;
        }
        else
        {
            for (int i = 0; i < pedidos; i++)
            {
                scanf("%d",&pessoas);

                if (pessoas % 2 == 0)
                {
                    temp = (pessoas * 2) - 2;
                    printf("%d\n",temp);
                }
                else
                {
                    temp = (pessoas * 2) - 1;
                    printf("%d\n",temp);
                }
            }
        }
    }
    
    return 0;
}