#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //declara��o de vari�veis
    char senha[10]; //string de at� 10 caracteres

    printf("Digite a senha: \n");
    gets(senha);

    if(strcmp(senha, "R10p5") == 0){
        printf("Acesso concedido :- ) \n");
    }else{
        printf("Acesso negado :- ( \n");
    }

    return 0;
}
