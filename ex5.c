#include <stdio.h>

int main() {
	float media;
    float frequencia;

	printf("Digite a media: ");
	scanf("%f", &media);

    printf("Digite a frequencia: ");
    scanf("%f", &frequencia);

	if (media >= 5.0 && frequencia >= 75.0) {
		printf("Aprovado.\n");
	} else {
		printf("Reprovado.\n");
	}

	return 0;
}