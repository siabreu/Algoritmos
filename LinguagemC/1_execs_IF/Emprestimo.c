#include<stdio.h>
#include<stdlib.h>

int main(){
    //declara��o de vari�veis
    float salario, prestacao, perc;

    //entrada
    printf("Digite o salario: \n");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao pretendida: \n");
    scanf("%f", &prestacao);

    //processamento
    perc = salario * 0.30;


    //decis�o e sa�da
    if(prestacao <= perc){
        printf("Emprestimo concedido \n");
    }else{
        printf("Emprestimo negado \n");
    }


    return 0;
}
