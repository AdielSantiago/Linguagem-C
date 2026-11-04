#include <stdio.h>

int main() {
    int idade, tempo_trabalho;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempo_trabalho);

    if (idade >= 65 || tempo_trabalho >= 30 || (idade >= 60 && tempo_trabalho >= 25)) {
        printf("\nRequerimento aceito: O trabalhador PODE se aposentar.\n");
    } else {
        printf("\nRequerimento negado: O trabalhador NAO PODE se aposentar.\n");
    }

    return 0;
}