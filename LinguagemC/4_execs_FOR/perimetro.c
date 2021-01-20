#include<stdio.h>
#include<stdlib.h>


int main(){
    int cont;
    float perimetro, raio, acmPerimetro = 0, media;

    for(cont = 0; cont < 5; cont++){
        printf("Digite o raio da circunferencia: \n");
        scanf("%f", &raio);
        perimetro = 3.14 * raio * raio;
        printf("O perimetro eh: %.1f \n", perimetro);
        acmPerimetro += perimetro;
    }

    media = acmPerimetro / cont;
    printf("A media dos perimetros eh: %.1f \n", media);

    return 0;
}
