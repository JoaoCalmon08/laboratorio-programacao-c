#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char codigo[10];
    char copia[50];
    char curso[50];
    char mensagem[100];

    printf("===== IDENTIFICAÇÃO ACADEMICA =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite o codigo do curso: ");
    scanf("%9s", codigo);

    strcpy(copia, nome);

    if (strcmp(codigo, "CC") == 0) {
        strcpy(curso, "Ciencia da Computacao");
    }
    else if (strcmp(codigo, "SI") == 0) {
        strcpy(curso, "Sistemas de Informacao");
    }
    else {
        printf("Codigo de curso invalido!\n");
        return 0;
    }

    printf("\n===== RESULTADO =====\n");

    printf("Nome: %s\n", copia);
    printf("Quantidade de caracteres: %d\n", strlen(nome));
    printf("Curso: %s\n", curso);

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
