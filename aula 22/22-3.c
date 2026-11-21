#include <stdio.h>

int main() {
    int valor = 15;
    int *ptr = &valor;

    printf("Valor antes: %d\n", valor);

    *ptr = 50;

    printf("Valor depois: %d\n", valor);

    return 0;
}
