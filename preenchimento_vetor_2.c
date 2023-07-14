#include <stdio.h>

int main() {
    int n[1000];
    int t;
    int i;

    scanf("%d", &t);
    if( t > 2 && t < 50){
    for (i = 0; i < 1000; i++) {
        n[i] = i % t;
        printf("N[%d] = %d\n", i, n[i]);
    }
    }
    return 0;
}
