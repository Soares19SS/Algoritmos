#include <stdio.h>

int main()
{
    float temperatura, celsius;

    printf("Digite a temperatura em F: \n");
    scanf("%f", &temperatura);

    celsius = (temperatura - 32) * 5 / 9;

    printf("%f F em celsius e: %f", temperatura, celsius);

    return 0;
}