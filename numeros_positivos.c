#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4, n5, n6, qtd;

    scanf("%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6);

    if (n1 > 0)
    {
        qtd = 1;
    }
    if (n2 > 0)
    {
        qtd += 1;
    }
    if (n3 > 0) 
    {
        qtd += 1;
    }
    if (n4 > 0) 
    {
        qtd += 1;
    }
    if (n5 > 0) 
    {
        qtd += 1;
    }
    if (n6 > 0) 
    {
        qtd += 1;
    }

    printf("%d valores positivos\n", qtd);

    return 0;
}
