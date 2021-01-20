#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    float alt, pesoIdeal;
    char sexo;

    printf("Digite a altura e o sexo (f/m): \n");
    scanf("%f", &alt);
    scanf(" %c", &sexo);

    if(sexo == 'f' || sexo == 'F'){
        pesoIdeal = 62.1 * alt - 44.7;
    }else{
        pesoIdeal = 72.7 * alt - 58;
    }
    printf("O peso ideal eh: %.1f KG\n", pesoIdeal);
    return 0;
}
