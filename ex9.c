#include <stdio.h>

int main() {
    int notas[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (notas[i] > 6) {
            printf("Valor maior que 6: %d\n", notas[i]);
        }
    }
    return 0;
}