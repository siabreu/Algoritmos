#include<stdio.h>
#include<stdlib.h>
#define TAM 3

//protótipo da funcao
int somarVetor(int numeros[], int *pMaior, int *pMenor);

int main(){
    int maior, menor; //armazena os resultados da função
    int numeros[] = {5, 2, 10};
    int i;
    
    printf("A soma eh : %i \n", somarVetor(numeros, &maior, &menor) );

    printf("Maior: %i  == Menor: %i \n", maior, menor);

    return 0;
}

int somarVetor(int numeros[], int *pMaior, int *pMenor){
    int i, soma = 0;
    
    *pMaior = numeros[0];
    *pMenor = numeros[0];

    for(i = 0; i < TAM; i++){
        if(numeros[i] < *pMenor)
            *pMenor = numeros[i];
        if(numeros[i] > *pMaior)
            *pMaior = numeros[i];
        soma += numeros[i];
    }
    
    return soma;
}