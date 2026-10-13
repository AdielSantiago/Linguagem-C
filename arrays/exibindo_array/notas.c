#include <stdio.h>
#include <stdlib.h>


int main(){
    float notas[3] = {8.0, 7.0, 10.0};

    printf("--------- Notas ---------\n");
    for(int i = 0; i <=2; i += 1){
        printf("nota %d: %.1f\n", i + 1 ,notas[i]);
    }
    printf("-------------------------");
    
    return 0;
}
