#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int contador = 0;
        
            while (contador != 6)
            {
                if( x % 2 != 0){
                    printf("%d\n",x);
                    x += 1;
                    contador +=1;
                }              
                x += 1;
            }
        
    
}