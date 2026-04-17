#include <stdio.h>

/*Crie um programa que pede ao usuário dois números inteiros X e N. O programa deve imprimir os números de 0 até N. Porém, se
o número de valores pares neste intervalo for maior que X, o programa deve ser encerrado.
*/

void main() {

int N, X;

printf("Digite o limite do intervalo: ");
scanf("%i", &N);

getchar();

printf("\n O numero de pares permitidos: ")
scanf("%i", &X);

int conta_pares = 0;

for (int i = 0; i <= N; i++)
{
    if (i % 2 == 0)
    {
        conta_pares++;
    }
    
    if (conta_pares > X)
    {
        break;
    }
    else{
        printf("%i", i);
    }
}


}