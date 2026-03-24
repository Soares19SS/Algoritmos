#include <stdio.h>

int main () {

    int dia, mes, ano;

    printf("\n\nDigite o dia, mes e ano do seu nascimento: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Voce nasceu no dia %d do mes %d do ano %d \n", dia, mes, ano);

}