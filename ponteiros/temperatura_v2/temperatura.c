#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float leituras[] = {22.5, 23.0, 21.8, 24.2, 22.1};
    float *p = leituras;
    
    for(int i = 0; i <=4; p ++, i ++){
        printf("%.1f ", *p);
    }
    return 0;
}