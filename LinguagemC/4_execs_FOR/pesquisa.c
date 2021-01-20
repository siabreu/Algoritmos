#include<stdio.h>
#include<stdlib.h>

int main(){
    int cont, contIdade = 0, contAltura = 0, contPeso = 0, idade;
    float altura, peso, acmAltura = 0, perc, mediaAltura;

    for(cont = 0; cont < 25; cont++){
        printf("****** Pessoa %i ******\n ", (i+1));
        printf("Digite a idade, o peso e a altura: \n");
        scanf("%i", &idade);
        scanf("%f", &peso);
        scanf("%f", &altura);

        if(idade > 50){
            contIdade++;
        }

        if(idade >= 10 && idade <= 20){
            contAltura++; //conta
            acmAltura += altura; //acumula
        }

        if(peso < 40){
            contPeso++;
        }
    }//fim do for

    perc = (contPeso*100) / cont;
    if(contAltura > 0){
        mediaAltura = acmAltura / contAltura;
    }else{
        mediaAltura = 0;
    }

    return 0;
}
