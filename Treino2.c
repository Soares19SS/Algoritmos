#include <stdio.h>

int main () {
    float num;
    
    printf("Digite o numero: \n");
    scanf("%f", &num);
    
    printf("O numero e: %.2f \n", num);
    
    if(num >= 0){
    printf("Positivo");
    } else {
     printf("Negativo");   
    }
    
    
    
    return 0;
}
