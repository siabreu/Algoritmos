#include<stdio.h>
#include<stdlib.h>

//protótipo da função
float calcularReajuste(float precoAntigo, float precoAtual);

int main(){
    float precoAntigo, precoAtual, perc;

    printf("Digite o preco antigo do produto: \n");
    scanf("%f", &precoAntigo);
    printf("Digite o preco atual do produto: \n");
    scanf("%f", &precoAtual);

    perc = calcularReajuste(precoAntigo, precoAtual);
    printf("O percentual de acrescimo foi de %.2f %%\n", perc);

    return 0;
}//fim do main

float calcularReajuste(float precoAntigo, float precoAtual){
    float perc;
    perc = ( (precoAtual - precoAntigo ) / precoAntigo) * 100;
    // ou==> perc =  (100 * precoAtual - 100 * precoAntigo ) / precoAntigo;
    
    return perc;
}

