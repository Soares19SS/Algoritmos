#include <stdio.h>

/*Crie um programa que lê um número inteiro relativo ao número de alunos de uma turma. Deve ser digitada uma nota para cada aluno,
ao final do programa, informar a média das notas digitadas.
*/

void main(){

    int n_alunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%i", &n_alunos);

    //1...n_alunos

    float nota, soma;
    soma = 0;

    for (int i = 1; i <= n_alunos; i++)
    {
        printf("Digite a nota do aluno %i: ", i);
        scanf("%f", &nota);

        soma = soma + nota;
    }
    
    printf("A media das notas e: %f", soma/n_alunos);

}