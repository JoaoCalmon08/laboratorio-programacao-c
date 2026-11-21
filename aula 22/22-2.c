#include <stdio.h>

int main() {
    int valor = 20;
    int *ptr = &valor;

    printf("Valor da variavel: %d\n", valor);
    printf("Endereco da variavel: %p\n", (void *)&valor);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr);

    return 0;
}
