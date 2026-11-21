#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

void cadastrar() {
    Funcionario f[MAX];
    int qtd, i;
    FILE *arquivo;

    do {
        printf("Quantos funcionarios deseja cadastrar (1 a %d)? ", MAX);
        scanf("%d", &qtd);
        getchar();
    } while (qtd < 1 || qtd > MAX);

    /* "a" = acrescenta ao final sem apagar os registros anteriores */
    arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for (i = 0; i < qtd; i++) {
        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        fgets(f[i].nome, sizeof(f[i].nome), stdin);
        f[i].nome[strcspn(f[i].nome, "\n")] = '\0';

        printf("Salario: ");
        scanf("%f", &f[i].salario);

        printf("Horas extras: ");
        scanf("%d", &f[i].horasExtras);
        getchar();

        fprintf(arquivo, "%s;%.2f;%d\n", f[i].nome, f[i].salario, f[i].horasExtras);
    }

    fclose(arquivo);
    printf("\nDados gravados com sucesso!\n");
}

void listar() {
    FILE *arquivo = fopen("funcionarios.txt", "r");
    Funcionario f;

    if (arquivo == NULL) {
        printf("\nNenhum funcionario cadastrado ainda.\n");
        return;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");
    while (fscanf(arquivo, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("Nome: %s | Salario: R$ %.2f | Horas extras: %d\n",
               f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);
}

int main() {
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar funcionarios\n");
        printf("2 - Listar funcionarios\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: cadastrar(); break;
            case 2: listar();    break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
