#include <stdio.h>
#include <stdlib.h>

int main(){
    int altura;

    printf("Digite a altura: ");
    scanf("%d", &altura);

    for(int i = 1; i <= altura; i += 1){
        
        for (int j = 1; j <= altura - i; j += 1){
            printf(" ");
        }
        
        for(int k = 1; k <= i * 2 - 1; k += 1){
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}


