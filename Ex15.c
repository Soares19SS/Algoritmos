#include <stdio.h>

/*Crie um programa que imprime em ordem decrescente todos os números inteiros maiores que zero a partir de um número
fornecido pelo usuário.*/

int main(){
    int num;

    printf("Digite um numero:");
    scanf("%i", &num);

    // i: 9 

    for (int i = num; i >= 0; i--)
    {
        printf("%i\n", i);
    }
    
}