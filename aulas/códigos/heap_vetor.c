#define trocar(a,b) {int aux = a;a=b;b=aux;}
#define MAX 100

int vetor[MAX];
// Se MAX for muito grande podemos fazer
// int* vetor = malloc(MAX*sizeof(int));

int tamanho = 0; // Tamanho atual da heap

/* A função corrigir tranforma a árvore fixada no "i" numa heap */
void corrigir(int i) {
	int filhoEsquerdo = 2*i+1;
	int filhoDireito = 2*i+2;
	int menor = i;

	if (filhoEsquerdo < tamanho && vetor[filhoEsquerdo] < vetor[menor])
		menor = filhoEsquerdo
	if (filhoDireito < tamanho && vetor[filhoDireito] < vetor[menor])
		menor = filhoDireito

	if (menor != i) {
		trocar(vetor[i],vetor[menor]);
		corrigir(menor);
	}
}

/* Remove um elemento da heap sem tratamento de underflow */
int remover() {
	int menor = vetor[0]
	vetor[0] = vetor[tamanho-1];
	tamanho--;
	corrigir(0);
	return menor;
}

/* Adiciona um elemento na heap sem tratamento de overflow */
void adicionar(int x) {
	int i = tamanho;
	tamanho++;
	vetor[i] = x;

	int pai = (i-1)/2;
	while (vetor[i] < vetor[pai]) {
		trocar(vetor[i],vetor[pai]);
		i = pai;
		pai = (i-1)/2;
	}
}
