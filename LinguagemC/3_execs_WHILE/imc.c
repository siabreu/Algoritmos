#include<stdio.h>
#include<stdlib.h>

int main(){
    int cont, contNobesos = 0;
    float alt, peso, imc;

    cont = 0;
    while(cont < 20){
        printf("Digite a altura e o peso: \n");
        scanf("%f", &alt);
        scanf("%f", &peso);

        imc = peso / (alt*alt);
        printf("O imc eh: %.1f \n", imc);

        if(imc >= 18.5 && imc < 25){
            contNobesos++;
        }

        cont++;
    }//fim do while

    printf("Total de pessoas nao obesas: %i \n", contNobesos);

    return 0;
}
