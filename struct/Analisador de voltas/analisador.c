#include <stdio.h>
#define MAX_VOLTAS 10

typedef struct{
   int tempo_volta;

} Volta ;

int main(){
    Volta voltas[MAX_VOLTAS];
    int total_cadastradas = 0;
    int melhor_tempo = 0;
    int melhor_volta = 1;
    float tempo_total = 0;

    printf("--- Cadastro de Voltas (Max: %d) ---\n", MAX_VOLTAS);
    printf("Digite o tempo da volta (ou digite 0 para encerrar mais cedo).\n\n");

    for(int i = 0; i < MAX_VOLTAS; i++){
        int tempo_digitado;
        
        printf("Tempo da volta %d (segundos): ", i + 1);
        scanf("%d", &tempo_digitado);

        if(tempo_digitado <= 0){
            printf("Encerrando...");
            break;
        }
        else{
            tempo_total += tempo_digitado;
        }
        
    
        voltas[i].tempo_volta = tempo_digitado;
        total_cadastradas += 1;
    }

    if (total_cadastradas > 0) {
        melhor_tempo = voltas[0].tempo_volta;
    
        for(int i = 0; i < total_cadastradas; i += 1){
            if(voltas[i].tempo_volta < melhor_tempo){
                melhor_tempo = voltas[i].tempo_volta;
                melhor_volta = i + 1;
            }
        }

        printf(
            "\n-------Analisador de voltas-------\n"
            "Quantidade de voltas: %d\n"
            "Melhor volta: %d\n"
            "Melhor tempo: %d\n"
            "Tempo medio: %.2f\n",
            total_cadastradas,
            melhor_volta,
            melhor_tempo,
            tempo_total / total_cadastradas
        );
    }
    else{
        printf("Nenhuma volta foi cadastrada.\n");
    }
    
    return 0;
}
