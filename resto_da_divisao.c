#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);

    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    while (x < y)
    {
        x++;
        if((x % 5 == 2) || (x % 5 == 3) && x != y){
            printf("%d\n",x);
        }
    }
    
    return 0;
}