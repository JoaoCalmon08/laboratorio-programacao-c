#include <stdio.h>

// Funcao para verificar se o numero e par
int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int numero;
    int resultado;

    printf("===== VERIFICADOR DE NUMEROS =====\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = verificarPar(numero);

    printf("\n===== RESULTADO =====\n");

    if (resultado == 1) {
        printf("O numero %d e PAR.\n", numero);
    }
    else {
        printf("O numero %d e IMPAR.\n", numero);
    }

    return 0;
}
