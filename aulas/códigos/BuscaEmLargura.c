#define tamanho 7
#define MAX 100
#include <stdio.h>

enum paleta { branco,cinza,preto};

int grafo[tamanho][tamanho];
paleta cores[tamanho];
int fila[tamanho];

int comecoFila;
int fimFila;
int tamanhoFila;

void enfilar(int x) {
	tamanhoFila++;
	fila[fimFila] = x;
	fimFila = (fimFila+1)%tamanhoFila;
}

int desenfilar() {
	tamanhoFila--;
	return fila[comecoFila++];
}

void BFS(int origem) {
	enfilar(origem);
	int x;
	while (tamanhoFila > 0) {
		x = desenfilar();
		printf("(%d) { Estou sendo pintado de preto]\n", x);
		cores[x] = preto;
		for (int i = 0; i < tamanho; ++i) {
			if (grafo[x][i] == 1 && cores[i] == branco) {
				enfilar(i);
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	for (int i = 0; i < tamanho; ++i) {
		cores[tamanho] = branco;
		for (int j = 0; j < tamanho; ++j)
			grafo[i][j] = 0;
	}
	tamanhoFila = 0;
	comecoFila = 0;
	fimFila = 0;

	grafo[0][1] = grafo[0][2] = grafo[1][3] =
	grafo[1][4] = grafo[2][5] = grafo[2][6] = 1;

	BFS(0);

	return 0;
}
