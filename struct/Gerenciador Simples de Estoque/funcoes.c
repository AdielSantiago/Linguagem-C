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

void buscar_produto(int codigo) {
    
}

void atualizar_quantia(int codigo, int valor_mudanca) {
    printf("\n--> [Teste] Funcao de atualizar quantia acionada!\n");
}