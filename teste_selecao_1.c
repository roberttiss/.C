#include <stdio.h>

int calculo(int a,int b,int c,int d);

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    calculo(a,b,c,d);
    return 0;

}


int calculo(int a,int b,int c,int d){
    if((b > c) && (d >a) && ((c + d )> (a + b)) && (c,d > 0) && (a % 2 == 0))
    {
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
}