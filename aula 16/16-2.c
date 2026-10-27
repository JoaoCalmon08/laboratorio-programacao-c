#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    printf("Nome completo: %s", nome);

    return 0;
}
