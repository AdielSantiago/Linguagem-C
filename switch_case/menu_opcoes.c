#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int opcao;
float valor;

int main(){
    system("cls");
    printf("[1]- Consultar Saldo\n[2]- add saldo\nopcao: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 2:
        printf("Digite um valor para add ao saldo: ");
        scanf("%f", &valor);

        printf("Valor de R$%.2f adicionado a sua conta.", valor);
        break;
    case 1:
        printf("Consultando Saldo...");
        break;
    default:
        printf("Valor digitado nao suportado.");
        break;
    }
    return 0;
}