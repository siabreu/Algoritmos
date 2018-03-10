#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num, quad, cubo, raiz, pot;

    printf("Digite um numero: \n");
    scanf("%f" , &num);

    quad = pow(num, 2);
    cubo = pow(num, 3);
    raiz = sqrt(num);
    pot = pow(num, 10);

    printf("O numero digitado foi %f\n", num);
    printf("O quadrado eh: %f\n", quad);
    printf("O cubo eh: %f\n", cubo);
    printf("A raiz quadrada eh: %f\n", raiz);
    printf("A potencia de 10 eh: %f\n", pot);

    return 0;
}
