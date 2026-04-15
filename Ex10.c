#include <stdio.h>

int main()
{
    int a;

    printf("Digite um valor: \n");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("%d eh menor que 0", a);
    }
    else if (a == 0)
    {
        printf("%d o valor eh zero");
    }
    else
    {
        printf("O valor eh maior que zero");
    }
}