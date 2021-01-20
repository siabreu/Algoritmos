#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//prototipo da função 
char isVogal(char ch);


int main(){
    char letra, result;

    printf("Digite uma letra: \n");
    scanf(" %c", &letra);

    result = isVogal(letra);
    if(result == 's'){
        printf("%c => eh vogal!!\n", letra);
    }else{
        printf("%c => nao eh vogal!!\n", letra);
    }

    return 0;
}//fim do main


//construção da função
char isVogal(char ch){
    ch = tolower(ch);

    if( ch == 'a' || ch == 'e' ||  ch == 'i' || ch == 'o' || ch == 'u' ){
        return 's';
    }else{
        return 'n';
    }
}