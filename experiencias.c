int main(){

int contador, quantidade;
char tipo;
int somaQuantidade, somaCoelhos, somaRatos, somaSapos;
double percentualCoelhos, percentualRatos, percentualSapos;

scanf("%d", &contador);

somaQuantidade = 0;
somaCoelhos = 0;
somaRatos = 0;
somaSapos = 0;

while (contador > 0)
{
    scanf("%d %c", &quantidade, &tipo);

    if (quantidade >= 1 && quantidade <= 15)
    {
        if (tipo == 'C' || tipo == 'R' || tipo == 'S')
        {
            somaQuantidade += quantidade;

            if (tipo == 'C')
            {
                somaCoelhos += quantidade;
            }

            if (tipo == 'R')
            {
                somaRatos += quantidade;
            }

            if (tipo == 'S')
            {
                somaSapos += quantidade;
            }
        }
    }

    contador--;
}

percentualCoelhos = (double)somaCoelhos * 100.0 / (double)somaQuantidade;
percentualRatos = (double)somaRatos * 100.0 / (double)somaQuantidade;
percentualSapos = (double)somaSapos * 100.0 / (double)somaQuantidade;

printf("Total: %d cobaias\n", somaQuantidade);
printf("Total de coelhos: %d\n", somaCoelhos);
printf("Total de ratos: %d\n", somaRatos);
printf("Total de sapos: %d\n", somaSapos);
printf("Percentual de coelhos: %.2lf %%\n", percentualCoelhos);
printf("Percentual de ratos: %.2lf %%\n", percentualRatos);
printf("Percentual de sapos: %.2lf %%\n", percentualSapos);

return 0;
}