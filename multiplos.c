#include <stdio.h>

int multiplo(int n1,int n2);


int main()
{
    int a,b;

    
    scanf("%d %d",&a,&b);
  
    multiplo(a,b);
    
    return 0;
}

int multiplo(int n1,int n2){
    if(n2 % n1 == 0){
        printf("Sao Multiplos\n");
    }
    else if(n1 % n2 == 0){
        printf("Sao Multiplos\n");
    }
    
    else{
        printf("Nao sao Multiplos\n");
    }
}