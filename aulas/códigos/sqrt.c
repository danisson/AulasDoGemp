#include <stdio.h>
#include <math.h>

int main() {
	double n;
	printf("Entre um número real: ");
	scanf("%lf",&n);
	printf("\n");

	if (n < 0) {
		printf("Não existe raíz real de um número negativo.\n");
	} else {
		printf("A raíz deste número é %lf.\n", sqrt(n));
	}

	return 0;
}