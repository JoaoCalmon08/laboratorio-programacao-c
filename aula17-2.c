#include <stdio.h>
#include <string.h>

int main() {
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[100];

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Digite o nome do produto: ");
    scanf(" %49[^\n]", produto);

    printf("Digite a categoria: ");
    scanf("%19s", categoria);

    strcpy(copia, produto);

    printf("\n===== RESUMO =====\n");

    printf("Produto: %s\n", produto);
    printf("Quantidade de caracteres: %d\n", strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    }
    else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    }
    else {
        printf("Categoria invalida!\n");
        return 0;
    }

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n%s\n", descricao);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
