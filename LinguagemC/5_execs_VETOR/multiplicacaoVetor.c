#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[8], vetB[8];
    int i;

    printf("Digite 8 numeros: \n");
    for(i = 0; i< 8; i++){
        scanf("%i", &vetA[i]);
    }

    printf("--- Dados do vetor B ---\n");
    //gera o vetor B e imprime
    for(i = 0; i< 8; i++){
        vetB[i] = vetA[i] * 3;
        printf("%i ", vetB[i]);
    }

    return 0;
}
