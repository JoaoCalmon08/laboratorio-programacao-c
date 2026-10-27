#include <stdio.h>

int main() {
    char palavra[100];
    int i;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;
}
