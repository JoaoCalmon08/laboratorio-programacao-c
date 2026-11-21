#include <stdio.h>

int main() {
    FILE *arquivo;
    int numeros[5], i, valor;

    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fprintf(arquivo, "%d\n", numeros[i]);
    }
    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\nNumeros armazenados no arquivo:\n");
    while (fscanf(arquivo, "%d", &valor) == 1) {
        printf("%d\n", valor);
    }
    fclose(arquivo);

    return 0;
}
