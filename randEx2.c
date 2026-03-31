#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

    srand(time(NULL));

    int num1 = 50 + rand() % 151;
    
    int res = num1 % 2 == 0;

    printf("num1: %i e ele eh: %i", num1, res);

    
    

}