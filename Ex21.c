#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int numero_sorte = rand() % 101;

    int tentativas = 0;

     int numero;
     
    do
    {

        printf("Digite um numero");
        scanf("%i", &numero);

        getchar();

        tentativas++;

        if (numero == numero_sorte)
        {
            printf("Voce acertou com %i tentativas!", tentativas);
        }
        else if (numero > numero_sorte)
        {
            printf("O numero digitado eh maior que o numero da sorte. Digite um numero menor!");
        }
        else
        {
            printf("\n O numero digitado eh menor que o numero da sorte. Digite um numero maior!");
        }

        printf("\n\n");

    } while (numero != numero_sorte);
}