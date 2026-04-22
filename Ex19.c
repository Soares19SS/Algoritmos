#include <stdio.h>

int main()
{

    char deseja_continuar = 's';

    while (deseja_continuar == 's')
    {
        printf("\n\n**Menu**\n\n");
        printf("1.Saldo\n");
        printf("2.Extrato\n");
        printf("3.Saque\n");
        printf("4.Transferencia\n\n");

        int opcao;

        printf("Escolha a operacao: ");
        scanf("%i", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            printf("\nVoce escolheu saldo.");
            break;
        case 2:
            printf("\nVoce escolheu extrato.");
            break;
        case 3:
            printf("\nVoce escolheu saque.");
            break;
        case 4:
            printf("\nVoce escolheu transferencia.");
            break;
        default:
            printf("\nVoce escolheu uma opcao invalida.");

            
        }

        printf("Deseja realizar outra operacao ? (s ou n)");
            scanf("%c", &deseja_continuar);
    }
    printf("Voce saiu do sistema.");
}