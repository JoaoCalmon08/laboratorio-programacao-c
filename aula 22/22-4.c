#include <stdio.h>

void dobrar(int *n) {
    *n = *n * 2;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Resultado (dobro): %d\n", numero);

    return 0;
}
