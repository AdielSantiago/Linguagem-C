#include <stdio.h>

#define TAMANHO 5

int main() {
    int numeros[TAMANHO];
    int cont = 0;

    
    for (cont = 0; cont < TAMANHO;) {
        int valor_digitado;
        int valor_encontrado = 0;

        printf("Digite o valor %d: ", cont + 1);
        scanf("%d", &valor_digitado);

        
        for (int i = 0; i < cont; i++) {
            if (valor_digitado == numeros[i]) {
                valor_encontrado = 1;
                break; 
            }
        }

        if (valor_encontrado) {
            printf(" -> Esse numero ja foi digitado! Tente outro.\n");
        } else {
            numeros[cont] = valor_digitado;
            cont++; 
        }
    }

    printf("\nValores unicos cadastrados com sucesso:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}