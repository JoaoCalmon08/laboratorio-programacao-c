
#include <stdio.h>

// Funcao para comparar os precos
float maiorPreco(float preco1, float preco2) {
    if (preco1 > preco2) {
        return preco1;
    }
    else {
        return preco2;
    }
}

int main() {
    float preco1, preco2, maior;

    printf("===== COMPARADOR DE PRECOS =====\n\n");

    printf("Preco 1: ");
    scanf("%f", &preco1);

    printf("Preco 2: ");
    scanf("%f", &preco2);

    printf("\n");

    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    }
    else {
        maior = maiorPreco(preco1, preco2);

        printf("Maior preco: R$ %.2f\n", maior);
    }

    return 0;
}
