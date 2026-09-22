#include <stdio.h>
#include <stdlib.h>

float somar(float a, float b);
float subtrair(float a, float b);
float dividir(float a, float b);
float multiplicar(float a, float b);
float porcentagem(float a, float b);
void interface(void);

int main(){
    int opcao;
    float valor;
    float num1;
    float num2;

    system("cls");

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite um numero: ");
    scanf("%f", &num2);

    interface();

    printf("Qual operador voce escolhe?: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        valor = somar(num1, num2);
        break;
    case 2:
        valor = subtrair(num1, num2);
        break;
    case 3:
        valor = dividir(num1, num2);
        break;
    case 4:
        valor = multiplicar(num1, num2);
        break;
    case 5:
        valor = porcentagem(num1, num2); 
        break;
    default:
        printf("Valor digitado nao suportado");
        break;
    }

    printf("O valor resultante da operacao escolhida foi: %.2f", valor);
    
    return 0;
}

float somar(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float dividir(float a, float b){
    if(b == 0){
        return 0;
    }
    else{
        return a / b;
    }
}

float multiplicar(float a, float b){
    return a * b;
}

float porcentagem(float a, float b){
    return (a/100) * b;
}

void interface(void){
    printf(
        "=======================================================\n"
        "                     Calculadora                       \n"
        "=======================================================\n"
        "[1]- Somar                                             \n"
        "[2]- subtrair                                          \n"
        "[3]- dividir                                           \n"
        "[4]- multiplicar                                       \n"
        "[5]- porcentagem                                       \n"
        "-------------------------------------------------------\n"
        );
}