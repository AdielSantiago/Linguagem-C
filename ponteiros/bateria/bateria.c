#include<stdio.h>
#include <stdlib.h>

int main(){
    int nivel_bateria = 85;
    int *p_bateria = &nivel_bateria;

    printf("Valor comum: %d\nEndereco de memoria: %p\nValor pelo ponteiro: %d", nivel_bateria, p_bateria, *p_bateria);
    
    return 0;
}