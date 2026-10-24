#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main(){
    Pessoa a1;
    strcpy(a1.nome, "Adiel de freitas Santiago");
    a1.idade = 19;
    a1.altura = 175;
    
    printf("O nome e %s, com idade de %d anos e altura %.0fCM", a1.nome, a1.idade, a1.altura);
    
    return 0;

}