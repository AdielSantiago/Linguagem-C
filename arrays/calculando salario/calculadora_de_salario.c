#include <stdio.h>
#include <string.h>

int main() {
    
    char nomes[10][50];
    float salarios_fixos[10];
    float vendas[10];
    float bonus[10];
    float salario_total[10];

    int i;
    int indice_maior = 0; 

    for (i = 0; i < 10; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]s", nomes[i]); 

        printf("Salario fixo: R$ ");
        scanf("%f", &salarios_fixos[i]);

        printf("Vendas realizadas: R$ ");
        scanf("%f", &vendas[i]);

        bonus[i] = vendas[i] * 0.15;

        salario_total[i] = salarios_fixos[i] + bonus[i];
    }

    for (i = 1; i < 10; i++) {
        if (salario_total[i] > salario_total[indice_maior]) {
            indice_maior = i;
        }
    }

    printf("\n========================================\n");
    printf("        RESULTADO DA PESSOA COM MAIOR SALARIO\n");
    printf("========================================\n");
    printf("Nome: %s\n", nomes[indice_maior]);
    printf("Salario Fixo: R$ %.2f\n", salarios_fixos[indice_maior]);
    printf("Bonus (15%% das vendas): R$ %.2f\n", bonus[indice_maior]);
    printf("Salario Total: R$ %.2f\n", salario_total[indice_maior]);
    printf("========================================\n");

    return 0;
}