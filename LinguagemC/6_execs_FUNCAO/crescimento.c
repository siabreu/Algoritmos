#include<stdio.h>
#include<stdlib.h>

//protótipo da função
int verificarCrescimento(float alt1, float alt2, float taxa1, float taxa2);

int main(){
    float alt1, alt2, taxa1, taxa2;
    int anos;

    do{
        printf("Digite a altura da Pessoa1: \n");
        scanf("%f", &alt1);
        printf("Digite a altura da Pessoa2: \n");
        scanf("%f", &alt2);
        if(!(alt1 >= alt2)){
            printf("Erro: alt1 tem que ser maior que alt2\n");
        }
    }while(!(alt1 >= alt2));

    do{
        printf("Digite a taxa crescimento da Pessoa1: \n");
        scanf("%f", &taxa1);
        printf("Digite a taxa crescimento da Pessoa2: \n");
        scanf("%f", &taxa2);
        if(!(taxa1 < taxa2)){
            printf("Erro: taxa1 tem que menor que taxa2\n");
        }
    }while(!(taxa1 < taxa2));


    anos = verificarCrescimento(alt1, alt2, taxa1, taxa2);

    printf("A pessoa2 levou %i anos para ficar mais alta que a pessoa1\n", anos);
    
    return 0;
}//fim do main

//construcao da funcao
int verificarCrescimento(float alt1, float alt2, float taxa1, float taxa2){
    int anos = 0;
    while(alt2 < alt1){
        alt1 += taxa1;
        alt2 += taxa2;
        anos++;
    }

    return anos;
}