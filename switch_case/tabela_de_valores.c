#include <stdio.h>

int main() {
    int codigo, quantidade;
    float total = 0.0;

    printf("Digite o codigo do item (1 a 5): ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 1:
            total = quantidade * 4.00;
            printf("\nItem: Cachorro Quente\n");
            break;
        case 2:
            total = quantidade * 4.50;
            printf("\nItem: X-Salada\n");
            break;
        case 3:
            total = quantidade * 5.00;
            printf("\nItem: X-Bacon\n");
            break;
        case 4:
            total = quantidade * 2.00;
            printf("\nItem: Torrada simples\n");
            break;
        case 5:
            total = quantidade * 1.50;
            printf("\nItem: Refrigerante\n");
            break;
        default:
            printf("\nCodigo invalido!\n");
            return 0; // Encerra o programa se o código não existir
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
