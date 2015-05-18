#include <stdio.h>
#include "list"

enum paleta { branco,cinza,preto };

struct no {
	int rotulo;
	paleta cor;
	std::list<no*> vizinhos;

	void inserirVizinho(no* v) {
		vizinhos.push_back(v);
	}

	no(int a, paleta b) {
		rotulo = a;
		cor = b;
	}
};
no* pegarNo(std::list<no*> l, int i) {
	std::list<no*>::iterator x = l.begin();
	while (i > 0) {
		x++;
		i--;
	}
	return *x;
}
std::list<no*> grafo;

void DFS(no* origem) {
	printf("(%d) { Estou sendo pintado de cinza]\n", origem->rotulo);
	origem->cor = cinza;
	std::list<no*> vizinhos = origem->vizinhos;
	for (std::list<no*>::iterator i = vizinhos.begin(); i != vizinhos.end(); ++i) {
		if ((*i)->cor == branco)
			DFS(*i);
		else if ((*i)->cor == cinza)
			printf("Ciclo detectado em %d\n", (*i)->rotulo);
		else
			printf("%d está pintado de preto\n", (*i)->rotulo);
	}
	origem->cor = preto;
	printf("(%d) { Estou sendo pintado de preto]\n", origem->rotulo);
}

int main(int argc, char const *argv[])
{
	for (int i = 0; i < tamanho; ++i) {
		grafo.push_back(new no(i,branco));
	}
	pegarNo(grafo,0)->inserirVizinho(pegarNo(grafo,1));
	pegarNo(grafo,0)->inserirVizinho(pegarNo(grafo,2));

	pegarNo(grafo,1)->inserirVizinho(pegarNo(grafo,3));
	pegarNo(grafo,1)->inserirVizinho(pegarNo(grafo,4));

	pegarNo(grafo,2)->inserirVizinho(pegarNo(grafo,5));
	pegarNo(grafo,2)->inserirVizinho(pegarNo(grafo,6));

	DFS(pegarNo(grafo,0));

	return 0;
}
