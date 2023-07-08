#include <stdio.h>

#define linha 12
#define coluna 12

int main() {
    char O;
    scanf("%c", &O);

    double matriz[coluna][linha];

    for (int a = 0; a < coluna; a++) {
        for (int i = 0; i < linha; i++) {
            scanf("%lf", &matriz[a][i]);
        }
    }

    if (O == 'S') {
        double soma = 0;
        for (int a = coluna - 1; a > 0; a--) {
            for (int i = coluna - a; i < coluna; i++) {
                soma += matriz[a][i];
            }
        }
        printf("%.1lf\n", soma);
    }

    if (O == 'M') {
        double soma = 0;
        int cont = 0;
        for (int a = coluna - 1; a > 0; a--) {
            for (int i = coluna - a; i < coluna; i++) {
                soma += matriz[a][i];
                cont += 1;
            }
        }
        printf("%.1lf\n", soma / cont);
    }

    return 0;
}
