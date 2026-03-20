#include <stdio.h>

int main() {

    float area, base, altura;

    printf("Insira a base do triangulo: \n");
    scanf("%f", &base);

    printf("Insira a altura do triangulo:\n");
    scanf("%f", &altura);

    area = (base * altura) /2;

    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}