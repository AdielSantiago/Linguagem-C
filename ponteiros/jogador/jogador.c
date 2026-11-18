#include<stdio.h>
#include <stdlib.h>

void receber_dano(int *vida, int dano);


int main(){
    int vida_jogador = 100;
    
    receber_dano(&vida_jogador, 50);

    printf("vida atual: %d", vida_jogador);
    return 0;
}

void receber_dano(int *vida, int dano){
    *vida -= dano;
}