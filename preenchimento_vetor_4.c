#include <stdio.h>

int main(){
    int par[5], impar[5];
    int qpar = 0,qimpar = 0;
    int x;
    int i,j;

    for (i = 0; i < 15; i++)
    {
        scanf("%d",&x);

        if (x % 2 == 0)
        {
            par[qpar] = x;
            qpar++;
            if(qpar == 5){
                for (j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n",j,par[j]);
                    qpar = 0;
                }
                

            }
        }else{
            impar[qimpar] = x;
            qimpar++;
            if (qimpar == 5)
            {
                for (j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n",j,impar[j]);
                    qimpar = 0;
                }
                
            }
            
        }
        
    }

    for (j = 0; j < qimpar; j++)
    {
        printf("impar[%d] = %d\n",j,impar[j]);
    }

    for (j = 0; j < qpar; j++)
    {
        printf("par[%d] = %d\n",j,par[j]);
    }

    return 0;
    
}