#include <stdio.h>

float ponderada(double a, double b, double c, double d);

int main()
{
    double result,A,B,C,D;

    scanf("%lf %lf %lf %lf",&A,&B,&C,&D);

    ponderada( A, B, C, D);
    return 0;
}


float ponderada (double a, double b, double c, double d){
    float media,notaExame,mediafinal;
    media = (a * 2 + b * 3 + c * 4 + d * 1) / (2+3+4+1);
    printf("Media: %.1lf\n",media);

    if(media >= 7){
        printf("Aluno aprovado.\n");}

    else if (media < 5){
                printf("Aluno reprovado.\n");
            }
    else if(media >= 5 && media <7){
        printf("Aluno em exame.\n");
        scanf("%f",&notaExame);

        mediafinal =(media + notaExame) / 2;

        printf("Nota do exame: %.1f\n",notaExame);

            if(mediafinal >= 5){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n",mediafinal);
            }
            else{
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n",media);
            }
    }
    

}