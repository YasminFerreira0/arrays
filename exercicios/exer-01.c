#include <stdio.h>
void main ()
{
    int i, conjA[8], conjB[8];

    printf("\nInforme os valores para A: \n");

    for (i=0;i<8;i++){
        scanf("%d", &conjA[i]);
    }
    for (i=0; i<8; i++){
        conjB[i] = conjA[i] * 3;
    }
    printf("\nOs valore de b sao: \n");

    for (i=0; i<8; i++){
        printf(" %d", conjB[i]);
    }
}
