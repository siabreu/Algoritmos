#include<stdio.h>
#include<stdlib.h>

int main(){
    //declaração de variáveis
    float salario, prestacao, perc;

    //entrada
    printf("Digite o salario: \n");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao pretendida: \n");
    scanf("%f", &prestacao);

    //processamento
    perc = salario * 0.30;


    //decisão e saída
    if(prestacao <= perc){
        printf("Emprestimo concedido \n");
    }else{
        printf("Emprestimo negado \n");
    }


    return 0;
}
