#include <stdio.h>

int main() {
    float deposito, taxa, rendimento, valorTotal;

    printf("Insira seu deposito: \n");
    scanf("%f", &deposito);

    printf("Insira o valor da taxa em %%: \n");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa/100);
    valorTotal = deposito + rendimento;

    printf("Valor total apos o rendimento: \n %.2f", valorTotal);

    return 0;
}