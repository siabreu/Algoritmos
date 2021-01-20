#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int cont, contPares = 0, contImpares = 0;
    int num;

    srand(time(NULL));

    cont = 0;
    while(cont < 200){
        num = rand()% 1000+1;
        printf("%i " , num);
        if(num % 2 == 0){
            contPares++;
        }else{
            contImpares++;
        }
        cont++;
    }//fim do while

    printf("\n\nTotal de pares: %i \n", contPares);
    printf("Total de impares: %i \n", contImpares);

    return 0;
}
