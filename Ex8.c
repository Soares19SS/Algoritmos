#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma > 10) {
        printf("A soma eh: %d\n", soma);
    }

    return 0;
}