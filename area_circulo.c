#include <stdio.h>
 
int main() {
 
    double raio;
    double n = 3.14159;
    double area;

    scanf("%lf",&raio);
    
    area = (raio*raio)*n;
    
    printf("A=%0.4lf\n",area);
 
    return 0;
}