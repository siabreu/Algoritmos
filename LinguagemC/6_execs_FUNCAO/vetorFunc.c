#include<stdio.h>
#include<stdlib.h>
#define TAM 5

//protótipo das funções
void imprimirVetor(int numeros[]);
void calcularMetade(int numeros[]);

int main(){
    int numeros[] = {2, 8, 10, 200, 5};

    imprimirVetor(numeros);

    calcularMetade(numeros);

    printf("\n\n=== vetor dividido ===\n");

    imprimirVetor(numeros);

    return 0;
}//fim do main

//construção das funções
void imprimirVetor(int numeros[]){
    int i;
    for(i = 0; i < TAM; i++){
        printf("%i ", numeros[i]);
    }
}

void calcularMetade(int numeros[]){
    int i;
    for(i = 0; i < TAM; i++){
        numeros[i] = numeros[i] / 2;
    }    
}