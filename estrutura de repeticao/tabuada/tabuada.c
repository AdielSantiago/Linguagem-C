#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = -1; // Inicializado com valor diferente de 0 para entrar no while
    
    system("cls");
    while (num != 0) {
        
        printf("\nDigite um valor para a tabuada (ou 0 para sair): ");
        scanf("%d", &num);

        // Se o usuario digitou 0, encerra imediatamente sem imprimir a tabuada do 0
        if (num == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        printf("\n--- Tabuada do %d ---\n", num);
        
        // Multiplica diretamente 'num * i' em vez de usar uma variavel acumuladora
        for (int i = 0; i <= 10; i++) {
            printf("%d X %d = %d\n", num, i, num * i);
        }
    }

    return 0;
}