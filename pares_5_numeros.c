#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4, n5;
    int qtd = 0;
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    if (n1 % 2 == 0)
    {
        qtd += 1;
    }
    if (n2 % 2 == 0)
    {
        qtd += 1;
    }
    if (n3 % 2 == 0) 
    {
        qtd += 1;
    }
    if (n4 % 2 == 0) 
    {
        qtd += 1;
    }
    if (n5 % 2 == 0) 
    {
        qtd += 1;
    }

    printf("%d valores pares\n", qtd);

    return 0;
}
