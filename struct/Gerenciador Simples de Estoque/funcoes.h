#ifndef FUNCOES_H
#define FUNCOES_H
#define MAX 10

typedef struct{
    int codigo;
    char nome[50];
    float valor;
    int quantidade;

} Produto;

void cadastrar_produto(char nome[50], int codigo, float valor, int quantidade);
void listar_produtos(void);
void buscar_produto(int codigo);
void atualizar_quantia(int codigo);

#endif