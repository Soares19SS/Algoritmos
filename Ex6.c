#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int total_prestacoes, pagas;
    float valor_prestacao;
    
    printf("Digite o total de prestacoes: ");
    scanf("%d", &total_prestacoes);
    
    printf("Digite o numero de prestacoes pagas: ");
    scanf("%d", &pagas);
    
    printf("Digite o valor da prestacao: ");
    scanf("%f", &valor_prestacao);

    int restantes = total_prestacoes - pagas;
    float saldo_devedor = restantes * valor_prestacao;

    printf("\nSaldo devedor: R$ %.2f\n", saldo_devedor);
    printf("Restam %d prestacoes.\n", restantes);

    srand(time(NULL)); // inicializa aleatoriedade

    int a = rand() % 20 + 1;
    int b = rand() % 20 + 1;
    int c = rand() % 20 + 1;

    printf("\nValores sorteados:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    int resultado = (a + b) * c;

    printf("Resultado da equacao (a + b) * c = %d\n", resultado);

    return 0;
}