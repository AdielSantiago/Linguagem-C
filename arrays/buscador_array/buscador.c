#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char cidades[5][30] = {"Joao pessoa", "Sao paulo", "Belo horizonte", "recife", "Pombal"};
    char nome_cidade[30];
    char validacao = 'N';

    printf("Digite o nome de uma cidade: ");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    for(int i = 0; i <= 4; i += 1){
        // strcmp retorna 0 se as strings forem iguais
        if(strcmp(cidades[i], nome_cidade) == 0){
            validacao = 'S';
            break;
        }
    }

    validacao == 'S' ? printf("A cidade esta na lista\n") : printf("A cidade nao esta na lista\n");
        
    return 0;
}