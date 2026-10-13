#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[3];
    
    for(int i = 0; i <=2; i += 1){
        printf("Digite um valor: ");
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i <=2; i += 1){
        printf("nota %d: %.1f\n", i + 1 ,notas[i]);
    }
    
    
    return 0;
}