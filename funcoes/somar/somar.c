#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b);
void mensagem(int a);



int main(){
    system("cls");
    printf("Somando numeros com funcao.\n");
    int resultado = somar(5, 5);

    mensagem(resultado);

    return 0;
}

int somar(int a, int b){
    return a + b;
}

void mensagem(int a){
    printf("O valor da soma retornado pela funcao somar foi %d", a);
}