#include <stdio.h>
#include<string.h>

int main(){
    int c;
    scanf("%d",&c);
    char nome[50];
    int i;
    int f;

    for (i = 0; i != c; i++)
    {
        scanf("%s",nome);
        scanf("%d",&f);

        if(strcmp(nome, "Thor")== 0){
            printf("Y\n");
        }

        else{
            printf("N\n");
        }
    }
     return 0;
}