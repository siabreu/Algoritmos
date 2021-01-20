#include<stdio.h>
#include<stdlib.h>
//prototipo da funcao
int verificar(int num);
int main(){
    int num, result;
    printf("Digite um numero: \n");
    scanf("%i", &num);

    result = verificar(num);

    if(result == 1){
        printf("Numero positivo!\n");
    }else{
         printf("Numero negativo!\n");        
    }
    return 0;
}//fim do main


//podem melhorar para verificar o valor 0 - retornando -1
int verificar(int num){
    if(num > 0){
        return 1;
    }else{
        if(num < 0){
            return 0;
        }
    }
}
