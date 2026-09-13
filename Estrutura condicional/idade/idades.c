#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 67;

    if( x >= 18 && x <= 65){
        printf("adulto");
    }
    else if(x > 65){
        printf("Idoso");
    }
    else{
        printf("Criança");
    }

    system("pause");
    
    
    
    
    

    return 0;
}