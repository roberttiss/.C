#include <stdio.h>

int calculo(int x);

int main(){
    int a,b;
    scanf("%d",&a);

    b = calculo(a);

    printf("%d minutos\n",b);
    return 0;

}

int calculo(int x){
    return x*2;
}