#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {12, 5, 8},
        {20, 7, 9},
        {6, 15, 3}
    };

    int i, j;
    int maior = matriz[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor da matriz: %d\n", maior);

    return 0;
}
