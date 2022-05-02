#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,pares=0,impares=-1;

    printf("Impares              Pares \n");

    for(i=1;i<=15;i++)
    {
        impares=impares+2;
        pares=pares+2;
        printf("%d                    %d \n",impares,pares);
    }

    return 0;
}
