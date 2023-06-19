#include <stdio.h>

float calculo(int a,int b);

int main(){
    int t,v;
    float dp;
    scanf("%d",&t);
    scanf("%d",&v);

    dp = calculo(t,v);

    printf("%.3f\n",dp);
    return 0;

}

float calculo(int a,int b){
    return (a * b) / 12.0;
}