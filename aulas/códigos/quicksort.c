// Macro que define uma troca de dois inteiros.
#define trocar(a,b) {int aux;aux = a;a = b;b = aux;}

// Função que escolhe um pivô dentro do vetor.
int escolherPivo(int vetor[], int inicio, int fim) {
	return inicio; /* Pivô é o primeiro elemento*/
	// return (inicio+fim)/2; /* Pivô é o elemento do meio */
	// return inicio + (rand() % (fim-inicio)); /* Pivô aleatório */
}

// Função que particiona um vetor a respeito de um pivô na posição "pivoPos"
// e retorna a posição que o pivô foi parar.
int particionarVetor(int vetor[], int inicio, int fim, int pivoPos) {
	int pivo = vetor[pivoPos];
	int indice = inicio;

	trocar(vetor[pivoPos],vetor[fim]);
	pivoPos = fim;

	for (int i = inicio; i <= fim; ++i) {
		if (vetor[i] < pivo) {
			trocar(vetor[i],vetor[indice]);
			indice++;
		}
	}

	trocar(vetor[pivoPos],vetor[indice]);
	pivoPos = indice;

	return pivoPos;
}

// Quicksort propriamente dito.
void quickSort(int vetor[], int inicio, int fim) {
	if (inicio < fim) {
		int pivoPos = escolherPivo(vetor,inicio,fim);
		pivoPos = particionarVetor(vetor,inicio,fim,pivoPos);

		quickSort(vetor,inicio,pivoPos-1);
		quickSort(vetor,pivoPos+1,fim);
	}
}

/* Usando esse quicksort
 * Sendo n o tamanho do vetor:
 *
 * int v[n];
 * quickSort(v,0,n-1);
 * 
 * Depois disso, v está ordenado.
 */