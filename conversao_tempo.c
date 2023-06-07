#include <stdio.h>

void conversao(int a, int *horas, int *minutos, int *segundos);

int main(){
    int a, horas, minutos, segundos;
    scanf("%d",&a);

    conversao(a, &horas, &minutos, &segundos);

    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}

void conversao(int a, int *horas, int *minutos, int *segundos){
     *horas = a / 3600;
     *minutos = (a % 3600) / 60;
     *segundos = a % 60;
}