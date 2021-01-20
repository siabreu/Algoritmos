#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int vet[10000], contador[] = {0,0,0,0,0,0,0,0,0,0};
    int i, elemento;

    for(i = 0; i < 10000; i++){
        vet[i] = rand()%10 + 1;
        printf("%i ", vet[i]);
    }

    for(i = 0; i < 10000; i++){
        elemento = vet[i];
        contador[ elemento-1 ]++;
    }

    printf("\n\n---- Frequencia dos numeros de 1 a 10 ---- \n");
    for(i = 0; i < 10; i++){
        printf("O numero %i aparece %i vezes!\n", (i+1), contador[i]);
        soma += contador[i];
    }

    return 0;
}
