#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetA[4], vetB[7], vetC[11];
    int i;

    printf("--- Leitura vetor A ---\n");
    for(i = 0; i < 4; i++){
        scanf("%f", &vetA[i]);
        //armazena dado de A no C
        vetC[i] = vetA[i];
    }

    printf("--- Leitura vetor B ---\n");
    for(i = 0; i < 7; i++){
        scanf("%f", &vetB[i]);
        /*
        armazena dado de B no C
        como a distancia dos indices é 4
        então soma 4 no C
        */
        vetC[i+4] = vetB[i];
    }

    printf("--- Dados vetor C ---\n");
    for(i = 0; i < 11; i++){
        printf("%.1f ", vetC[i]);
    }

    return 0;
}
