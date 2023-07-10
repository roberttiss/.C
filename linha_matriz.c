#include <stdio.h>
#define linha 12
#define coluna 12

int main() {
    int l;
    scanf("%d", &l);
    char t;
    scanf(" %c",&t);
    double matriz[coluna][linha];

    for (int i = 0; i < coluna; i++) {
        for (int a = 0; a < linha; a++) {
            scanf("%lf", &matriz[i][a]);
        }
    }

    if (t == 'S') {
            double soma = 0;
            for (int a = 0; a < coluna; a++) {
            soma += matriz[l][a];
    }
        printf("%.1lf\n", soma);
    } 
    
    else if (t == 'M') {
        double soma = 0;
        int cont = 0;
        for (int a = 0; a < coluna; a++) {
        soma += matriz[l][a];
        cont++;
    }
        printf("%.1lf\n", soma / cont);
    }

    return 0;
}
