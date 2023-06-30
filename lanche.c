#include <stdio.h>
float calculo(float codigo,float quantidade);
 
int main() {
 float x,y;
 scanf("%f%f",&x,&y);
 calculo(x,y);
 return 0;
}

float calculo(float codigo,float quantidade){
    if(codigo == 1){
        printf("Total: R$ %.2f\n",quantidade * 4.00);
    }
    else if(codigo == 2){
        printf("Total: R$ %.2f\n",quantidade * 4.50);
    }
    else if(codigo == 3){
        printf("Total: R$ %.2f\n",quantidade * 5.00);
    }
    else if(codigo == 4){
        printf("Total: R$ %.2f\n",quantidade * 2.00);
    }
    else if(codigo == 5){
        printf("Total: R$ %.2f\n",quantidade * 1.50);
    }
    else{
        printf("Codigo Inválido\n");
    }
}