#include <stdio.h>

int main () {
    int idade, dias;

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("Sua idade em dias e: \n %d", dias);

    return 0;
}