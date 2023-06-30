#include <stdio.h>
#include <math.h>

int maior(int a,int b);

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("%d eh o maior\n",maior(maior(a,b),c));
    return 0;
}

int maior(int a,int b){
   return (a+b+abs(a-b))/2 ;
}