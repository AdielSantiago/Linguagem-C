#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char frase[100];
    int cont;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);


    for(int i = 0; frase[i] != '\0' && frase[i] != '\n'; i += 1){
        cont += 1;
    }

    printf("A frase tem %d caracteres.", cont);
        
    return 0;
}