#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media, acmMedia = 0, mediaClasse;
    int cont, cAprov = 0, cExam = 0, cReprov = 0;

    for(cont = 0; cont < 6; cont++){
        printf("Digite duas notas: \n");
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2.0;
        printf("A media eh %.2f \n", media);

        //acumular a media
        acmMedia += media;

        //verificar a situacao
        if(media <= 3){
            printf("Voce reprovou!! :-( \n");
            cReprov++;
        }else{
            if(media < 7){
                printf("Voce ficou de exame :-/ \n");
                cExam++;
            }else{
                printf("Voce esta APROVADO :-) \n");
                cAprov++;
            }
        }
    } //fim do for

    mediaClasse = acmMedia / cont;
    printf("A media da classe eh: %.2f \n", mediaClasse);
    printf("Total de APROVADOS: %i \n", cAprov);
    printf("Total de EXAME: %i \n", cExam);
    printf("Total de REPROVADOS: %i \n", cReprov);

    return 0;
}
