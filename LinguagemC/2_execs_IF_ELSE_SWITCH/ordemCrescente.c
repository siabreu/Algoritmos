#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("Digite 3 numeros: \n");
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);

    if(n1 < n2 && n1 < n3){  //n1
        if(n2 < n3){
            printf("%i  %i  %i\n", n1, n2, n3);
        }else{
            printf("%i  %i  %i\n", n1, n3, n2);
        }
    }

    if(n2 < n1 && n2 < n3){ //n2
        if(n1 < n3){
            printf("%i  %i  %i\n", n2, n1, n3);
        }else{
            printf("%i  %i  %i\n", n2, n3, n1);
        }
    }

    if(n3 < n1 && n3 < n2){ //n3
        if(n1 < n2){
            printf("%i  %i  %i\n", n3, n1, n2);
        }else{
            printf("%i  %i  %i\n", n3, n2, n1);
        }
    }

    return 0;
}
