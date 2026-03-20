#include <stdio.h>

int main() {
    float salario, salarioNovo;

    printf("Informe seu salario: \n");
    scanf("%f", &salario);

    salarioNovo = salario + (salario * 25/100);

    printf("Seu novo salario: \n %.2f", salarioNovo);

}