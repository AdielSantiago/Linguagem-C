#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
    char nome[50];
    int idade;
    float altura;
} pessoav2;

int main(){
    pessoav2 turma[3];

    for(int i = 0; i <= 2; i += 1){
        system("cls");
        
        printf("Digite o nome da pessoa %d:", i + 1);
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        turma[i].nome[strcspn(turma[i].nome, "\n")] = 0;

        printf("Digite a idade da pessoa %d:", i + 1);
        scanf("%d", &turma[i].idade);

        printf("Digite a altura da pessoa %d:", i + 1);
        scanf("%f", &turma[i].altura);
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    
    system("cls");
    for(int i = 0; i <= 2; i += 1){
        printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", turma[i].nome, turma[i].idade, turma[i].altura);
        printf("-----------------------\n");
        
    }
    
    return 0;
}

