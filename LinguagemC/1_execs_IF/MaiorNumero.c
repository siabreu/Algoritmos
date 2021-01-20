#include<stdio.h>
#include<stdlib.h>

int main(){
    //declaração de variáveis
    int n1, n2, n3;

    //entrada
    printf("Digite 3 numeros: \n");
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);

    //processamento e saida
    if(n1 > n2 && n1 > n3){
        printf("O maior eh: %i \n", n1);
    }else{
        if(n2 > n3){
            printf("O maior eh: %i \n", n2);
        }else{
            printf("O maior eh: %i \n", n3);
        }
    }

    return 0;
}
