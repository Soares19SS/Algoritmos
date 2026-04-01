#include <stdio.h>

int main() {

float salario, aumento, novoSalario;

printf("Insira seu salario: \n");
scanf("%f", &salario);

if (salario <= 1000)
{
    novoSalario = salario * 1.20;
} else {
    novoSalario = salario * 1.10;
}
    printf("Seu salario é %f e com o aumento: %f \n", salario, novoSalario);

}