#include <stdio.h>

float eh_positivo(float n);

int main() {
    
    float x, y;
    int positivo;

    positivo = 0;
    x = 6;

    while (x > 0)
    {
        scanf("%f",&y);

        if (eh_positivo(y))
        {
            positivo++;
        }

        x--;
    }

    printf("%d valores positivos\n", positivo);
    
    return 0;
}

float eh_positivo(float n) {

    if (n > 0)
    {
        return n;
    }

    return 0;
}