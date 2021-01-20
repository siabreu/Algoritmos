#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    float n1, n2, media, acmSala = 0;

    cont = 0;
    while(cont < 5){
        do{
            printf("Digite a 1a nota: \n");
            scanf("%f", &n1);
            if(!(n1 >= 0 && n1 <= 10)){
                printf(">>erro: nota fora do intervalo (0-10)\n");
            }
        }while(!(n1 >= 0 && n1 <= 10));

        do{
            printf("Digite a 2a nota: \n");
            scanf("%f", &n2);
            if(!(n2 >= 0 && n2 <= 10)){
                printf(">>erro: nota fora do intervalo (0-10)\n");
            }
        }while(!(n2 >= 0 && n2 <= 10));

        media = (n1 + n2) / 2;
        printf("A media eh %.2f \n", media);
        //acumular a média da sala
        acmSala = acmSala + media;

        cont = cont + 1;
    }//fim do while

    printf("A media da Sala eh %.2f \n", acmSala/cont );

    return 0;
}
