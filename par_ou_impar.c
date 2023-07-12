#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int x;

    if(n < 10000){
        while (n > 0)
        {
            scanf("%d",&x);

            if(x == 0){
                printf("NULL\n");
            }
            else{
                if(x % 2 != 0 && x < 0){
                    printf("ODD NEGATIVE\n");
                }
                if(x % 2 != 0 && x > 0){
                    printf("ODD POSITIVE\n");
                }
                if(x % 2 == 0 && x > 0){
                    printf("EVEN POSITIVE\n");
                }
                if(x % 2 == 0 && x < 0){
                    printf("EVEN NEGATIVE\n");
                }
            }
            n--;
        }

    }
    return 0;
    }
    
    
