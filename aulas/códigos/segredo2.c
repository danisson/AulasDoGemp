#include <stdio.h>

int main() {
	int n;
	int secreto = 0xFF; // Números que começam em 0x
	                   // estão em hexadecimal.

	printf("Adivinhe o número secreto: ");
	scanf("%d",&n);

	while (n != secreto) {
		printf("Desculpe, você errou.\n"
		       "Tente novamente:");
		scanf("%d",&n);
	}

	printf("Parabéns, você adivinhou corretamente.\n");
	return 0;
}