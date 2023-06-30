#include <stdio.h>

int main(){
    int n,contador;
    scanf("%d",&n);
    int dentro=0;
    int fora=0;

    if(n < 10000){
        while (n > 0){
            scanf("%d",&contador);
            if(contador >= 10 && contador <= 20){
                dentro++;
            }
            else{
                fora++;
            }
            n--;
        }
}
    printf("%d in\n",dentro);
    printf("%d out\n",fora);

    return 0;

}