#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {2, 5, 8},
        {4, 7, 9},
        {6, 1, 3}
    };

    int i, j, pares = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Quantidade de valores pares: %d\n", pares);

    return 0;
}
