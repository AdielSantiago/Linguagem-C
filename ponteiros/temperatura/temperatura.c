#include <stdio.h>
#include <stdlib.h>



float temperatura, soma = 0.0, media = 0.0;
int contador = 0;

int main(){
    FILE *arquivo = fopen("sensor.txt", "r");

    while (fscanf(arquivo, "%f", &temperatura) == 1){
        soma += temperatura;
        contador += 1;
    }
    fclose(arquivo);

    media = soma / contador;

    printf("Media das temperaturas: %.2fC\n", media);
    
    system("pause");
    return 0;
}