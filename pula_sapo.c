#include <stdio.h>
#include <stdlib.h>

int main() {
    int resultado = 0;
    int pulo, qtd_cano;
    int tm_cano1, tm_cano2, tm;
    int i = 0;

    scanf("%d %d", &pulo, &qtd_cano);
    resultado = 0;

    while (i < qtd_cano && resultado == 0) {
        if (i == 0) {
            scanf("%d", &tm_cano1);
            scanf("%d", &tm_cano2);

            tm = abs(tm_cano1 - tm_cano2);

            if (tm > pulo) {
                resultado = 1;
            }

            tm_cano1 = tm_cano2;
        }
        else {
            scanf("%d", &tm_cano2);
            tm = abs(tm_cano1 - tm_cano2);

            if (tm > pulo) {
                resultado = 1;
            }

            tm_cano1 = tm_cano2;
        }

        i++;
    }

    if (resultado == 0) {
        printf("YOU WIN\n");
    }
    else {
        printf("GAME OVER\n");
    }

    return 0;
}
