#include <stdio.h>

/*Comando While:
*Inicialização de uma ou mais variáveis de controle.

*Definição de uma condição de parada
*Enquanto for verdadeira: repete

*Atualização da(s) variável(eis) de controle
*cuidado: loop infinito
*/
int main(){

    int i=1; //incialização da variável.

    while (i <= 10)
    {
        printf("%d", i);
        i++;
    }
    
}

