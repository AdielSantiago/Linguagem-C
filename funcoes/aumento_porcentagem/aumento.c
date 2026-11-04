#include <stdio.h>
#include <stdlib.h>

float aumento(float x, float y);

int main(){
    float num1, num2, num3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    
    num3 = aumento(num1, num2);
    printf("O valor de %.2f com %.2f porcento dele mesmo e: %.2f", num1, num2, num3);
    
    return 0;
}

float aumento(float x, float y){
    int valor = x;
    valor += (x * (y /100));
    
    return valor;
}