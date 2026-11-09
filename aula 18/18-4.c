#include <stdio.h>

// Funcao para calcular o dobro
int dobro(int quantidade) {
    return quantidade * 2;
}

int main() {
    int quantidade;
    int quantidadeFinal;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");

    printf("Quantidade inicial: ");
    scanf("%d", &quantidade);

    quantidadeFinal = dobro(quantidade);

    printf("\n===== DADOS DO ESTOQUE =====\n");

    printf("Quantidade inicial: %d\n", quantidade);
    printf("Quantidade final: %d\n", quantidadeFinal);

    return 0;
}
