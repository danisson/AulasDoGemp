#define tamanho 5
#include <stdio.h>

enum paleta { branco,cinza,preto};

int grafo[tamanho][tamanho];
paleta cores[tamanho];

void DFS(int origem) {
	printf("(%d) { Estou sendo pintado de cinza]\n", origem);
	cores[origem] = cinza;
	for (int i = 0; i < tamanho; ++i) {
		if (grafo[origem][i] == 1 && cores[i] == branco) {
			DFS(i);
		}
		else if (grafo[origem][i] == 1 && cores[i] == cinza)
			printf("Ciclo detectado em %d\n", i);
		else if (grafo[origem][i] == 1)
			printf("%d está pintado de preto\n", i);
	}
	cores[origem] = preto;
	printf("(%d) { Estou sendo pintado de preto]\n", origem);
}

int main(int argc, char const *argv[])
{
	for (int i = 0; i < tamanho; ++i) {
		cores[tamanho] = branco;
		for (int j = 0; j < tamanho; ++j)
			grafo[i][j] = 0;
	}

	grafo[0][1] = grafo[1][2] = grafo[2][3] =
	grafo[3][1] = grafo[3][4] = 1;

	DFS(0);

	return 0;
}
