#include <stdio.h>

int main(int argc, char const *argv[])
{
    double n1, n2, n3, n4, n5, n6, qtd, media;

    scanf("%lf%lf%lf%lf%lf%lf", &n1, &n2, &n3, &n4, &n5, &n6);

    if (n1 > 0)
    {
        qtd += 1;
        media = media + n1;
    }
    if (n2 > 0)
    {
        qtd += 1;
        media = media + n2;
    }
    if (n3 > 0) 
    {
        qtd += 1;
        media = media + n3;
    }
    if (n4 > 0) 
    {
        qtd += 1;
        media = media + n4;
    }
    if (n5 > 0) 
    {
        qtd += 1;
        media = media + n5;
    }
    if (n6 > 0) 
    {
        qtd += 1;
        media = media + n6;
    }

    media = media / qtd;

    printf("%0.lf valores positivos\n%.1lf\n", qtd, media);

    return 0;
}
