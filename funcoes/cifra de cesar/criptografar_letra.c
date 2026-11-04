#include <stdio.h>
#include <string.h>

char criptografar_letra(char letra, int chave);

int main(){
    char mensagem[50];
    int chave;
    
    printf("Digite a sua mensagem para criptografia: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    printf("Digite a chave da criptografia: ");
    scanf("%d", &chave);

    mensagem[strcspn(mensagem, "\n")] = '\0';

    for(int i = 0; i < strlen(mensagem); i += 1){
        mensagem[i] = criptografar_letra(mensagem[i], chave);
    }

    printf("Mensagem criptografada: %s", mensagem);
    
    return 0;
}

char criptografar_letra(char letra, int chave){
    char nova_letra = letra + chave;

    if(nova_letra > 'z'){
        return nova_letra - 26;
    }
    else{
        return nova_letra;
    }
}
