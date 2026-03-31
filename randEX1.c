#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    srand(time(NULL));

    int num1 = rand() % 11;
    int num2 = rand() % 11;

    printf("%i elevado a %i: %.3f", num1, num2, pow(num1, num2));


}