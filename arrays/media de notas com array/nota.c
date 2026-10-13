#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[3];
    float media;
    float cont;

    for(int i = 0; i <= 2; i += 1){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        cont += notas[i];
    }
    system("cls");

    for(int i = 0; i <= 2; i += 1){
        printf("Nota %d: %.1f\n", i + 1, notas[i]);
        printf("------------\n");
    }

    media = cont / 3;

    printf("Media: %.1f\n",media);
    
    return 0;
}