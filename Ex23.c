#include <stdio.h>

int main() {

    char mensagem[5];

    printf("Digite uma mensagem: \n");
    fgets(mensagem, 5, stdin);

    printf("A mensagem digitada eh: \n %s", mensagem);


}