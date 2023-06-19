#include <stdio.h>

int main(){
    int n;
    int rpm[100],rpm2;
    int i = 1;
    int a = 0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&rpm[i]);
    }

    rpm2 = rpm[0];

    while (i < n && a == 0)
    {
        if (rpm[i] > rpm2)
        {
            rpm2 = rpm[i];
        }

        if (rpm[i] < rpm2)
        {
            a = i + 1;
        }
        
        i++;
    }
    
    printf("%d\n",a);
    return 0;
    
}