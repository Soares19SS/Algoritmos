#include <stdio.h>

int main () {

    float precoFabrica, percLucro, percImpostos, valorLucro, valorImpostos, precoFinal;

    printf("Preco de fabrica: \n");
    scanf("%f", &precoFabrica);

    printf("Percentual de lucro: \n");
    scanf("%f", &percLucro);

    printf("Percentual de impostos: \n");
    scanf("%f", &percImpostos);

    valorLucro = precoFabrica * (percLucro / 100);
    valorImpostos = precoFabrica * (percImpostos / 100);
    precoFinal = precoFabrica + valorLucro + valorImpostos;

    printf("Valor do lucro: %.2f \n", valorLucro);
    printf("\nValor dos impostos: R$ %.2f", valorImpostos);
    printf("\nPreco final do veiculo: R$ %.2f", precoFinal);

    return 0;

}