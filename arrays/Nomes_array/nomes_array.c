#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nomes[4][30];
    
    for(int i = 0; i <= 3; i += 1){
        printf("Informe um nome: ");
        fgets(nomes[i], sizeof(nomes[0]), stdin);
    }

    for(int i = 0; i <= 3; i += 1){
        for(int j = 0; j <= 29; j += 1){
            if(nomes[i][j] == '\n'){
                nomes[i][j] = '\0';
            }
        }
    }

    printf("Os nomes informados foram:\n\n");
    
    for(int i = 0; i <= 3; i += 1){
        printf("%s\n", nomes[i]);
        printf("---------------\n");
    }
     
    return 0;
}