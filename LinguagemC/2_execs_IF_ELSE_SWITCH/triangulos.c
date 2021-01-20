#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite os 3 lados: \n");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    if( (a < b + c) && (b < a + c) && (c < a + b) ){  //triangulo
        if(a == b && b == c){
            printf("Equilatero\n");
        }else{
            if(a != b && b != c && a != c){
                printf("Escaleno");
            }else{
                printf("Isosceles\n");
            }
        }
    }else{
        printf("Nao forma um triangulo!\n");
    }

    return 0;
}
