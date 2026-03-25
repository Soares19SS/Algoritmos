#include <stdio.h>
#include <math.h>

int main() {
    float a, b;

    a = 81;
    b = 4.5;

    float raiz = sqrt(a);

    a = 2;
    b = 4.5;

    float expo = pow(a, b);

    printf("A raiz quadrada de %.2f e %.4f", a, raiz);
    printf("\n %.2f elevado a %.2f e %.4f", a, b, expo);
}