#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    float n1, n2, n3, media;

    //entrada de dados
    printf("Digite 3 notas: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    //processamento
    media = ( (n1*2) + (n2*3) + (n3*5) ) / 10.0;
    printf("A media ponderada eh %.1f \n", media);

    //decisões e saídas
    if(media >= 8 && media <= 10){
        printf("Conceito A \n");
    }else{
        if(media >= 7 && media < 8){
            printf("Conceito B \n");
        }else{
            if(media >=6){
                printf("Conceito C \n");
            }else{
                if(media >= 5){
                    printf("Conceito D \n");
                }else{
                    printf("Conceito E \n");
                }
            }
        }
    }


    return 0;
}
