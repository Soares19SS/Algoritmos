#include <stdio.h>

int main() {
    int idade;
    float valor;

    printf("Digite a idade do conveniado: ");
    scanf("%d", &idade);

    // Estrutura de decisao para definir o valor com base na idade
    if (idade <= 10) {
        valor = 30.00;
    } 
    else if (idade <= 29) {
        valor = 60.00;
    } 
    else if (idade <= 45) {
        valor = 120.00;
    } 
    else if (idade <= 59) {
        valor = 150.00;
    } 
    else if (idade <= 65) {
        valor = 250.00;
    } 
    else {
        valor = 400.00;
    }

    printf("\nIdade: %d anos", idade);
    printf("\nO valor da mensalidade sera: R$ %.2f\n", valor);

    return 0;
}