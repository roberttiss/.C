#include <stdio.h>

int main() {
    
    int numTestes, anos;
    int populacaoA, populacaoB;
    double crescimentoA, crescimentoB;

    scanf("%d", &numTestes);

    anos = 0;

    if (numTestes >= 1 && numTestes <= 3000)
    {
        while (numTestes > 0)
        {
            scanf("%d %d %lf %lf", &populacaoA, &populacaoB, &crescimentoA, &crescimentoB);
            
            while ((populacaoA <= populacaoB) && (anos < 101))
            {
                populacaoA += (int)((populacaoA * crescimentoA) / 100);
                populacaoB += (int)((populacaoB * crescimentoB) / 100);

                anos++;
            }

            if (anos > 100)
            {
                printf("Mais de 1 seculo.\n");
            }
            else
            {
                printf("%d anos.\n", anos);
            }
                    
            anos = 0;
            numTestes--;
        }
    }
    
    return 0;
}
