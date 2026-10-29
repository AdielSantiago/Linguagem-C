#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

//del /f programa.exe 2>nul & gcc *.c -o programa && .\programa
//taskkill /F /IM programa.exe


int main(){
    int escolha_usuario;
    
    while (1){
        system("cls");
        printf(
                "Selecione sua escolha abaixo:\n"
                "---------------------------------------\n"
                "[1]- Cadastrar novo produto.\n"
                "[2]- Listar todos os produtos.\n"
                "[3]- Buscar produto por codigo.\n"
                "[4]- Atualizar quantidade do estoque.\n"
                "[5]- Sair.\n"
                "---------------------------------------\n"
                "Escolha -> "
            );
        scanf("%d", &escolha_usuario);
        getchar();

        switch (escolha_usuario){
        case 1:{

            int codigo, quantidade;
            char nome[50];
            float valor;

            printf("Digite o nome do produto que deseja adicionar: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            printf("Digite o codigo do produto: ");
            scanf("%d", &codigo);

            printf("Digite o valor do produto: ");
            scanf("%f", &valor);

            printf("Digite a quantidade inicial do produto: ");
            scanf("%d", &quantidade);

            cadastrar_produto(nome, codigo, valor, quantidade);
            break;
        }
        case 2:
            listar_produtos();
            break;
        case 3:{
            int codigo;
            printf("Digite o codigo para buscar: ");
            scanf("%d", &codigo);
          
            buscar_produto(codigo);
            break;
        }
        case 4:{
            int codigo;
            int valor;

            printf("Digite o codigo para buscar: ");
            scanf("%d", &codigo);
            
            printf("Digite um valor positivo para add ou um negativo para retirar: ");
            scanf("%d", valor);
            
            atualizar_quantia(codigo, valor);
            break;
        }
        case 5:
            printf("Encerrando...");
            exit(0);
            break;
        default:
            break;
        }
    }

    return 0;
}
