#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variáveis
    float salario, inss;

    //entrada
    printf("Digite o salario: \n");
    scanf("%f", &salario);

    //decisao e processamento
    if(salario <= 600.0){
        inss = 0;
    }else{
        if(salario <= 1200.0){
            inss = salario * 0.20;
        }else{
            if(salario <= 2000.0){
                inss = salario * 0.25;
            }else{
                inss = salario * 0.30;
            }
        }
    }

    if(inss == 0){
        printf("Isento!\n");
    }else{
        printf("O desconto eh R$ %.2f \n", inss);
    }

    return 0;
}
