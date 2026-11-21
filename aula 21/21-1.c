#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nome[50];
    char matricula[20];
    int i;

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Matricula: ");
        fgets(matricula, sizeof(matricula), stdin);
        matricula[strcspn(matricula, "\n")] = '\0';

        fprintf(arquivo, "%s;%s\n", nome, matricula);
    }

    fclose(arquivo);
    printf("\nDados gravados com sucesso!\n");

    return 0;
}
