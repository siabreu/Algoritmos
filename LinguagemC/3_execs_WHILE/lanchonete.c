#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod, qtd;
    float totalCompra = 0, totalProd = 0, preco;
    char resp = 's';

    while(resp == 's' || resp == 'S'){
        printf("==== Menu da Lanchonete =====\n");
        printf("100 - Cachorro quente\n");
        printf("101 - Bauru simples\n");
        printf("102 - Bauru com ovo\n");
        printf("103 - Hamburguer\n");
        printf("104 - Cheeseburguer\n");
        printf("105 - Refrigerante\n");
        printf("Escolha o codigo do produto: \n");
        scanf("%i", &cod);

        if(cod >= 100 && cod <= 105){
            printf("Quantas unidades? ");
            scanf("%i", &qtd);

            switch(cod){
                case 100:
                    preco = 1.2;
                    break;
                case 101:
                    preco = 1.3;
                    break;
                case 102:
                    preco = 1.5;
                    break;
                case 103:
                    preco = 1.2;
                    break;
                case 104:
                    preco = 1.3;
                    break;
                case 105:
                    preco = 1.0;
                    break;
            }//fim do switch
            totalProd = qtd * preco;
            printf("%i x R$ %.2f = %.2f \n",qtd, preco, totalProd);
            totalCompra = totalCompra + totalProd;

            printf("Comprar mais produtos (s/n)?: ");
            scanf(" %c", &resp);
        }else{
            printf("Codigo invalido!\n");
        }
    }//fim do while

    printf("=======================\n");
    printf("TOTAL A PAGAR: R$ %.2f \n", totalCompra);
    printf("=======================\n");

    return 0;
}
