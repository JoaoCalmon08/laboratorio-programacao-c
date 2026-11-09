#include <stdio.h>

// Funcao para exibir o menu
void exibirMenu() {
    printf("\n===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
}

// Funcao para somar
float somar(float a, float b) {
    return a + b;
}

// Funcao para subtrair
float subtrair(float a, float b) {
    return a - b;
}

// Funcao para multiplicar
float multiplicar(float a, float b) {
    return a * b;
}

// Funcao para dividir
float dividir(float a, float b) {
    return a / b;
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        exibirMenu();

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {

            printf("\nPrimeiro numero: ");
            scanf("%f", &num1);

            printf("Segundo numero: ");
            scanf("%f", &num2);

            switch (opcao) {

                case 1:
                    resultado = somar(num1, num2);
                    printf("\nResultado: %.2f\n", resultado);
                    break;

                case 2:
                    resultado = subtrair(num1, num2);
                    printf("\nResultado: %.2f\n", resultado);
                    break;

                case 3:
                    resultado = multiplicar(num1, num2);
                    printf("\nResultado: %.2f\n", resultado);
                    break;

                case 4:
                    if (num2 == 0) {
                        printf("\nErro! Nao e possivel dividir por zero.\n");
                    }
                    else {
                        resultado = dividir(num1, num2);
                        printf("\nResultado: %.2f\n", resultado);
                    }
                    break;
            }
        }
        else if (opcao == 0) {
            printf("\nCalculadora encerrada.\n");
        }
        else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
