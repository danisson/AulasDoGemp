#include <stdio.h>

int main() {
	int n;
	int secreto = 0xFF; // Números que começam em 0x
	                   // estão em hexadecimal.

	printf("Adivinhe o número secreto: ");
	scanf("%d",&n);

	if (n == secreto) {
		printf("Parabéns, você adivinhou.\n");
		return 0; // Vamos sair mais cedo para não executar
		         // o que vem depois do <if>
	}

	printf("Desculpe, você errou.\n")
	return 0;
}