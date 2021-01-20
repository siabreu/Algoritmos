#include<stdio.h>
#include<stdlib.h>

//protótipos
int somarValores(int n1, int n2);

int main(){
    int n1, n2, soma;

    printf("Digite dois numeros: \n");
    scanf("%i", &n1);
    scanf("%i", &n2);

    soma = somarValores(n1, n2);
    printf("O somatorio entre %i e %i eh: %i", n1, n2, soma);

    return 0;
}//fim do main

//construção da função
int somarValores(int n1, int n2){
    int i, soma = 0;

    for(i = n1; i <= n2; i++){
        soma += i;
    }

    return soma;
}