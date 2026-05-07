#include <stdio.h>
#include <string.h>


int main(){

    char nome[20]; // Declaração da String em C --> vetor de caracteres
    printf("Digite seu nome : ");
    fgets(nome, 50, stdin);

    char senha[20];
    printf("Digite sua senha: ");
    fgets(senha, 50, stdin);

    //scanf("%s", nome); // Especificador novo %s --> recebe a sequencia
    
    nome[strcspn(nome, "\n")];

    char auth[20] = "Gabriel Romao";
    char key[20] = "Dsa aula seis";

    int tamanho_nome, tamanho_auth, tamanho_senha, tamanho_key;

    tamanho_nome = strlen(nome);
    tamanho_auth = strlen(auth);

    //printf("%d\n", (tamanho_nome-1));
    //printf("%d\n", tamanho_auth);

    tamanho_key = strlen(nome);
    tamanho_senha = strlen(auth);

    //printf("%d\n", tamanho_senha);
    //printf("%d\n", (tamanho_key - 1));
    

    if((tamanho_nome - 1) == tamanho_auth && tamanho_senha == (tamanho_key-1)){
        printf("\nUsuario autorizado! ");
    }else{
        printf("\nUsuario desconhecido! ");
    }

    //printf("O seu nome e: %s", nome);
    return 0;

}