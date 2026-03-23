#include <stdio.h>

int main() {

    float num, dobro, quartaParte;

    printf("Adicione o numero: \n");
    scanf("%f", &num);

    dobro = num * 2;

    printf("o dobro do numero e: \n\n %.2f", dobro);

    quartaParte = num / 4;

    printf("O numero por 4 e: \n %.2f", quartaParte);

}