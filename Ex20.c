#include <stdio.h>

int main() {
    char tecla;

    do
    {
        printf("Digite uma tecla: ");
        scanf("%c", &tecla);

        getchar();

        printf("\nVoce digitou a tecla %c. \n", tecla);
    }while (tecla != 'x');
    
}