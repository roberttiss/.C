#include <stdio.h> 

int calculo_anos(int idade);
int calculo_meses(int idade);
int calculo_dias(int idade);

int main()
{
    int idadepessoa;
    scanf("%d",&idadepessoa);


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",calculo_anos(idadepessoa),calculo_meses(idadepessoa),calculo_dias(idadepessoa));
    return 0;
}

int calculo_anos(int idade){
    int calculo1;
    calculo1 = idade / 365;
    return (calculo1);

}

int calculo_meses(int idade){
    int calculo2;
    calculo2 = idade % 365 / 30;
    return (calculo2);
}

int calculo_dias(int idade){
    int calculo3;
    calculo3 = (idade % 365) % 30;
    return (calculo3);
}