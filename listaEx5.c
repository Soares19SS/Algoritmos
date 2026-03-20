#include <stdio.h>

int main() {
    float salario, aumentoPerc, valorAumento, salarioNovo;

    printf("Informe o salario: \n");
    scanf("%f", &salario);

    printf("Qual o percentual de aumento? \n");
    scanf("%f", &aumentoPerc);

    valorAumento = salario * (aumentoPerc / 100);
    salarioNovo = salario + valorAumento;

    printf("\nResultado\n");
    printf("Valor do aumento \n %.2ff", valorAumento);
    printf("Novo salario : R$ %.2f\n", salarioNovo);
    
}