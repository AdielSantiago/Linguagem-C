#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota;

    printf("Nota: ");
    scanf("%f", &nota);

    if(nota >= 7 && nota < 9){
        printf("Aprovado");
    }
    else if(nota >=9){
        printf("Aprovado com excelencia");
    }
    else{
        printf("Recuperacao");
    }
    
    return 0;
}
 