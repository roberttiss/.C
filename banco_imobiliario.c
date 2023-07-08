#include <stdio.h>
#include <string.h>

int main() {
    
    int dalia, eloi, felix;
    int valor, jogadas;
    char input[100];
    char letras[5];

    scanf("%d", &valor);
    scanf("%d", &jogadas);
    getchar();

    dalia = valor;
    eloi = valor;
    felix = valor;

    for (int i = 0; i < jogadas; i++)
    {
        
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%[A-Za-z ]%d", letras, &valor);

        if (letras[0] == 'C')
        {
            if (letras[2] == 'D')
            {
                dalia -= valor;
            }
            else if (letras[2] == 'E')
            {
                eloi -= valor;
            }
            else if (letras[2] == 'F')
            {
                felix -= valor;
            }
        }
        else if (letras[0] == 'V')
        {
            if (letras[2] == 'D')
            {
                dalia += valor;
            }
            else if (letras[2] == 'E')
            {
                eloi += valor;
            }
            else if (letras[2] == 'F')
            {
                felix += valor;
            }
        }
        else if (letras[0] == 'A')
        {
            if (letras[2] == 'D')
            {
                if (letras[4] == 'E')
                {
                    dalia += valor;
                    eloi -= valor;
                }
                else if (letras[4] == 'F')
                {
                    dalia += valor;
                    felix -= valor;
                }
            }
            else if (letras[2] == 'E')
            {
                if (letras[4] == 'D')
                {
                    eloi += valor;
                    dalia -= valor;
                }
                else if (letras[4] == 'F')
                {
                    eloi += valor;
                    felix -= valor;
                }
            }
            else if (letras[2] == 'F')
            {
                if (letras[4] == 'D')
                {
                    felix += valor;
                    dalia -= valor;
                }
                else if (letras[4] == 'E')
                {
                    felix += valor;
                    eloi -= valor;
                }
            }
        }
    }
    
    printf("%d %d %d\n",dalia, eloi, felix);

    return 0;
}