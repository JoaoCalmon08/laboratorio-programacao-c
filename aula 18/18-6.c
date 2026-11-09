#include <stdio.h>

// Funcao para calcular o fatorial
int calcularFatorial(int numero) {
    int fatorial = 1;
    int i;

    for (i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main() {
    int numero;
    int resultado;

    printf("===== CALCULO DE FATORIAL =====\n\n");

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("\nNumero invalido! Digite um valor entre 0 e 12.\n");
    }
    else {
        resultado = calcularFatorial(numero);

        printf("\n===== RESULTADO =====\n");

        printf("Numero informado: %d\n", numero);
        printf("Fatorial: %d! = %d\n", numero, resultado);
    }

    return 0;
}
