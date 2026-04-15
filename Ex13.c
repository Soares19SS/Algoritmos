#include <stdio.h>

/*Crie um programa que lê um número inteiro, e imprime na tela todos os números ímpares menores ou iguais
ao número lido. Considere 0 como mínimo valor possível.*/
int main()
{
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}