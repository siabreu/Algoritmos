#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int main()
{
    char caracteres[TAMANHO];
    int i;

    printf("Digite 15 caracteres: \n");
    for(i = 0; i < TAMANHO; i++){
        scanf(" %c", &caracteres[i]);
    }

    printf("== caracteres inverso ==\n");
    for(i = TAMANHO-1; i >= 0; i--){
        printf("%c ", caracteres[i]);
    }


    return 0;
}
