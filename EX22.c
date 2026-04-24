#include <stdio.h>

int main() {

    int N;

    printf("Digite o valor de N: ");
    scanf("%i", &N);

    for(int i = 1; 1 <= N; i++)
    {

        for (int c = 1; c <= N; c++)
        {
            if (i == c)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }

}