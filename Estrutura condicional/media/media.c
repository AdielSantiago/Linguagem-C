#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, media;
    
    system("cls");

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media: %.1f\n", media);


    media >= 7 ? printf("Acima da media") : printf("Abaixo da media");

    return 0;
}