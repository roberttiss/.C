#include <stdio.h>

int main(){
    double n1,n2,n3;
    int n;
    scanf("%d",&n);

    while( n > 0){
        scanf("%lf",&n1);
        scanf("%lf",&n2);
        scanf("%lf",&n3);

        double media = (n1*2 + n2*3 + n3*5) / 10;

        n--;

        printf("%.1lf\n",media);
    }
    return 0;
}