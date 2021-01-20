#include<stdio.h>
#include<stdlib.h>

void gerarVetor(int numeros[], int tamanho);
int main(){
    int numeros[30];
    int i;

    gerarVetor(numeros, 30);
    for(i = 0; i < 30; i++){
        printf("%i ", numeros[i]);
    }

    return 0;
}//fim do main

void gerarVetor(int numeros[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        numeros[i] = rand() % 100;
    }
}