#include <stdio.h>

int main () {
    float horasTrabalhadas, salarioMin, salarioBruto, valorHorasTrabalhadas, imposto, salarioReceber;

    printf("Insira o numero de horas trabalhadas e o valor do salario minimo: \n");
    scanf("%f", &horasTrabalhadas);
    scanf("%f", &salarioMin);

    valorHorasTrabalhadas = salarioMin / 2;
    salarioBruto = horasTrabalhadas * valorHorasTrabalhadas;
    imposto = salarioBruto * 0.03;
    salarioReceber = salarioBruto - imposto;

    printf("Salario a receber: %f \n", salarioReceber);

    return 0;
}