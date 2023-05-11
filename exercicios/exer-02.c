#include <stdio.h>
void main()
{
    int i, conjA[20], conjB[20], conjC[20];

    printf("\nInforme os valores para A: \n");
    for (i=0; i < 20; i++){
            scanf("\n%d", &conjA[i]);
    }

    printf("\nInforme os valores para B: \n");
    for (i=0; i < 20; i++){
            scanf("\n%d", &conjB[i]);
    }

    printf("\nOs valores do conjunto C sao: \n");
    for (i=0; i < 20; i++){
        conjC[i] = conjA[i] - conjB[i];
        printf(" %d", conjC[i]);
    }
}
