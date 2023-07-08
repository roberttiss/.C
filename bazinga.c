#include <stdio.h>
#include <string.h>

int main() {

    int jogadas;
    char j1[20], j2[20];

    scanf("%d", &jogadas);

    for (int i = 0; i < jogadas; i++) 
    {
        
        scanf("%s", j1);
        scanf("%s", j2);

        if (strcmp(j1, j2) == 0) 
        {
            printf("Caso #%d: De novo!\n", i + 1);
        }
        else if (strcmp(j1, "pedra") == 0) 
        {
            if (strcmp(j2, "lagarto") == 0 || strcmp(j2, "tesoura") == 0) 
            {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else 
            {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
        }
        else if (strcmp(j1, "papel") == 0) 
        {
            if (strcmp(j2, "pedra") == 0 || strcmp(j2, "Spock") == 0) 
            {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else
            {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
        }
        else if (strcmp(j1, "tesoura") == 0) 
        {
            if (strcmp(j2, "papel") == 0 || strcmp(j2, "lagarto") == 0) 
            {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else 
            {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
        }
        else if (strcmp(j1, "lagarto") == 0) 
        {
            if (strcmp(j2, "Spock") == 0 || strcmp(j2, "papel") == 0) 
            {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else 
            {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
        }
        else if (strcmp(j1, "Spock") == 0) 
        {
            if (strcmp(j2, "tesoura") == 0 || strcmp(j2, "pedra") == 0) 
            {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else 
            {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
        }
    }

    return 0;
}