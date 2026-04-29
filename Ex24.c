#include <stdio.h>

int main() {
    int diarias;
    float taxa_servico, valor_total;
    const float PRECO_DIARIA = 50.00;

    printf("Digite a quantidade de diarias: ");
    scanf("%d", &diarias);

    if (diarias < 15) {
        taxa_servico = 15.30;
    } 
    else if (diarias == 15) {
        taxa_servico = 10.00;
    } 
    else {
        taxa_servico = 8.50;
    }

    valor_total = diarias * (PRECO_DIARIA + taxa_servico);

    printf("\n--- Resumo da Conta ---");
    printf("\nNumero de diarias: %d", diarias);
    printf("\nTaxa aplicada: R$ %.2f por dia", taxa_servico);
    printf("\nValor total a pagar: R$ %.2f\n", valor_total);

    return 0;
}