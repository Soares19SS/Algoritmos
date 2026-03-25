#include <stdio.h>
#include <math.h>

int main() {

    float a, b;

    printf("Digite dois numeros: \n");
    scanf(" %f %f", &a, &b);

    float senoPrimeiro = sin(a);
    float raiz = sqrt(senoPrimeiro);

    printf("A raiz do seno de %f e %f", a, raiz);

    float coseno = cos(a);
    float expo = pow(b, coseno);

    printf("%f elevado a %f e %f", b, coseno, expo);

    return 0;

}