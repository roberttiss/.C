#include <stdio.h>
#include <string.h>

int main() {
    
    int i, nmr[3] = {0};
    char p[8];

    i = 0;

    while (i < 3)
    {
        gets(p);

        if (strcmp(p, "caw caw") == 0)
        {
            i++;
        }
        else if (strcmp(p, "--*") == 0)
        {
            nmr[i] += 1;
        }
        else if (strcmp(p, "-*-") == 0)
        {
            nmr[i] += 2;
        }
        else if (strcmp(p, "-**") == 0)
        {
            nmr[i] += 3;
        }
        else if (strcmp(p, "*--") == 0)
        {
            nmr[i] += 4;
        }
        else if (strcmp(p, "*-*") == 0)
        {
            nmr[i] += 5;
        }
        else if (strcmp(p, "**-") == 0)
        {
            nmr[i] += 6;
        }
        else if (strcmp(p, "***") == 0)
        {
            nmr[i] += 7;
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\n",nmr[i]);
    }

    return 0;
}