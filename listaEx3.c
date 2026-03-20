#include <stdio.h>

int main() {
    float nota1, nota2, nota3, MediaPond;

    printf("Adicione nota1: \n");
    scanf("%f", &nota1);

    printf("Adicione nota2: \n");
    scanf("%f", &nota2);

    printf("Adicione nota3: \n");
    scanf("%f", &nota3);


    MediaPond = ((nota1 *2) + (nota2 *3) + (nota3 *5)) /10;

    printf("A media Ponderada das notas e: %f \n", MediaPond);

}