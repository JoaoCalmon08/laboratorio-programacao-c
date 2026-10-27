#include <stdio.h>

int main() {
    char palavra[100];
    int i, cont = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        switch (palavra[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cont++;
                break;
        }
    }

    printf("Quantidade de vogais: %d\n", cont);

    return 0;
}
