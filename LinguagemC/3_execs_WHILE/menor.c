#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, menor = 0;

    cont = 0;
    while(cont < 10){
        printf("Digite %io numero: \n", (cont+1) );
        scanf("%i", &num);
        //eh a primeira passagem no laço
        if(cont == 0){
            menor = num;
        }

        if(num < menor){
            menor = num;
        }

        cont = cont + 1;
    }

    printf("O menor eh %i \n", menor);

    return 0;
}
