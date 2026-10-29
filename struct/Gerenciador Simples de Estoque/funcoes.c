#include <stdio.h>
#include <string.h>
#include "funcoes.h"
#include <Windows.h>

Produto produtos[MAX]; 
int total_produtos = 0;

void cadastrar_produto(char nome[], int codigo, float valor, int quantidade) {
    if(total_produtos < MAX){
        strcpy(produtos[total_produtos].nome, nome);
        produtos[total_produtos].codigo = codigo;
        produtos[total_produtos].valor = valor;
        produtos[total_produtos].quantidade = quantidade;
        total_produtos += 1;
        
        printf("Produto adicionado com sucesso!!");
    }
    else{
        printf("O estoque esta cheio!");
    }
    Sleep(3000);
}

void listar_produtos(void){
    for(int i = 0; i < total_produtos; i++){
        printf("Produto %d: Nome -> %s | Codigo -> %d | Valor -> %.2f | Quantidade -> %d\n", 
                i + 1,
                produtos[i].nome, 
                produtos[i].codigo, 
                produtos[i].valor, 
                produtos[i].quantidade);
        printf("--------------------------------------------------------------------------\n");
    }
    Sleep(7000);
}

void buscar_produto(int codigo){
    int encontrado = 0;
    for(int i = 0; i < total_produtos; i++){
        if(produtos[i].codigo == codigo){
            printf("Produto %d: Nome -> %s | Valor -> %.2f | Quantidade -> %d\n", 
                produtos[i].codigo,
                produtos[i].nome,  
                produtos[i].valor, 
                produtos[i].quantidade);
                Sleep(7000);
            
            encontrado = 1;
            break;
        } 
    }
    if(encontrado == 0){
        printf("Produto nao encontrado.");
        Sleep(7000);
    }
}

void atualizar_quantia(int codigo){
    int valor;
    int encontrado = 0;
    for(int i = 0; i < total_produtos; i++){
        if(produtos[i].codigo == codigo){
            encontrado = 1;
            while (1){
                system("cls");
                printf("-----------------------------------------\n");
                printf("|        Nome do produto: %-13s |\n", produtos[i].nome);
                printf("|------->    Estoque: %-7d   <-------|\n", produtos[i].quantidade);
                printf("-----------------------------------------\n");


                printf("Digite um valor positivo para add ou um negativo para retirar(0 para sair): ");
                scanf("%d", &valor);

                if(valor == 0){
                    break;
                }
                else if (valor > 0){
                    produtos[i].quantidade += valor;
                }
                else{
                    produtos[i].quantidade -= (valor * -1);
                }  
            }
            break;    
        }
    }  
    if(encontrado == 0){
        printf("Produto nao encontrado");
        Sleep(7000);
    }
}