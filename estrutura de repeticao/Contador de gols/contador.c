#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int gols_flamengo = 0, gols_vasco = 0, numero_de_jogos = 0, continuar = 0, vitorias_flamengo = 0, vitorias_vasco = 0, empates = 0;
    char vencedor[50];


    while (continuar == 0){
        system("cls");
        printf(
            "-----------------------\n"
            "|Federacao de Futebol |\n\n"
            "|Estatisticas de jogos|\n\n"
            "|Flamengo  vs   Vasco |\n"
            "-----------------------\n\n"
        );

        printf("Gols Flamengo: ");
        scanf("%d", &gols_flamengo);

        printf("Gols Vasco: ");
        scanf("%d", &gols_vasco);

        numero_de_jogos += 1;

        if(gols_flamengo > gols_vasco){
            printf("\nFlamengo venceu o jogo %d\n", numero_de_jogos);
            vitorias_flamengo += 1;
        }
        else if (gols_vasco > gols_flamengo){
            printf("\nVasco venceu o jogo %d\n", numero_de_jogos);
            vitorias_vasco += 1;
        }
        else{
            printf("\nAs duas equipes empataram no jogo %d\n", numero_de_jogos);
            empates += 1;
        }
        
        printf("\nDeseja continuar?(0 -> sim/ 1 -> nao)");
        scanf("%d", &continuar);

    }
    
    if(vitorias_flamengo > vitorias_vasco){
        strcpy(vencedor, "Flamengo");
    }
    else if(vitorias_flamengo < vitorias_vasco){
        strcpy(vencedor, "Vasco");
    }
    else{
        strcpy(vencedor, "Empatados");
    }
    

    system("cls");
    printf(
        "-----------------------\n"
        "|Federacao de Futebol |\n\n"
        "|Estatisticas de jogos|\n\n"
        "|Flamengo  vs   Vasco |\n"
        "-----------------------\n\n"
    );
    printf(
        "Total de jogos: %d\n"
        "Vitorias do Flamengo: %d\n"
        "Vitorias do Vasco: %d\n"
        "Empates: %d\n"
        "Vencedor geral: %s\n",
        numero_de_jogos,
        vitorias_flamengo,
        vitorias_vasco,
        empates,
        vencedor
    );

    return 0;
}