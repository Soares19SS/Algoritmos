#include <stdio.h>

int main()
{
    int idade, ano, anoNovo;

    printf("Adicione sua idade: \n");
    scanf("%d", &idade);

    ano = 2026;

    printf("\nAno atual : %d", ano);

    anoNovo = idade + 24;

    printf("\nEm 2050 vc tera: %d anos\n ", anoNovo);
}