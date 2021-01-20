#include<stdio.h>
#include<stdlib.h>
//prototipo da funcao
void converter(int segundos);

int main(){
    int segundos;
    printf("Digite os segundos: \n");
    scanf("%i", &segundos);
    converter(segundos);
    return 0;
}//fim do main

void converter(int segundos){
    int horas, minutos, resto;

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%02i:%02i:%02i horas\n", horas, minutos, segundos);
}