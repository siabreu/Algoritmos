#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, soma, raiz;
    int op;

    printf("====== MENU DE OPCOES ======\n");
    printf("1 - somar dois numeros\n");
    printf("2 - calcular a raiz quadrada\n");
    printf("Escolha uma opcao:\n");
    scanf("%i", &op);

    switch( op ){
        case 1:
            printf("Digite 2 numeros: \n");
            scanf("%i", &num1);
            scanf("%i", &num2);
            soma = num1 + num2;
            printf("A soma eh: %i \n", soma);
            break;
        case 2:
            printf("Digite um numero: \n");
            scanf("%i", &num1);
            raiz = sqrt(num1);
            printf("A raiz quadrada de %i eh: %i \n", num1, raiz);
            break;
        default:
            printf("Opcao invalida!\n");
    }//fim do switch

    return 0;
}
