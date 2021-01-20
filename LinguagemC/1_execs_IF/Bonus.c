#include<stdio.h>
#include<stdlib.h>

int main(){
    //declaracao de variaveis
    float bonus, salario;
    int tempo;

    //entrada
    printf("Digite o salario: \n");
    scanf("%f", &salario);
    printf("Digite o tempo de casa: \n");
    scanf("%i", &tempo);

    //decisao e processamento
    if(tempo >= 5){
        bonus = salario * 0.20;
    }else{
        bonus = salario * 0.10;
    }

    //saida
    printf("O bonus eh R$ %.2f \n", bonus);

    return 0;
}
