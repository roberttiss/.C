#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int soma = 0;

    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    else{
        x = x;
        y = y;
    }

    while (x <= y)
    {
       if(x % 13 != 0){
        soma += x;
       }
       x++;
    }
    printf("%d\n",soma);
    return 0;
    
}