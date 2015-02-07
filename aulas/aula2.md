include(`macros.m4')
Entrada e Saída padrão e variáveis
==================================
aulaimg(2.png)
Nesta aula eu vou comentar de alguns conceitos básicos sobre programas no geral e como processar dados simples. Um comentário pertinente é que aqui eu não vou ensinar como escrever código seguro, em outras palavras, o estilo de escrita que estamos usando aqui é bem diferente do que se usa na vida real, o motivo disto é que na maratona precisamos escrever código rápido que recebe entradas bem comportadas. Nunca se esqueça que na vida real casos "não-comportados" são extremamente pertinentes.  
Enfim, na [aula passada](aula1.html) vimos como é escrito o famoso "Hello World" e agora iremos aprender o que está acontecendo verdadeiramente e como escrever um código parecido.

Um pouco de sintaxe
-------------------
Relembrando um pouco o código que vimos anteriormente:

```c
#include<stdio.h>

int main() { // Comece daqui
	printf("Hello World!\n"); // Escreva "Hello World" e quebre a linha
	return 0; // Terminei com sucesso
}
```
Assim como qualquer linguagem, em C temos que aprender a gramática dela para poder escrever coisas que façam sentido. Todo programa deve ter uma função `main`, ou seja, esta parte de código é fundamental:

```c
int main() {
	/* Seu código aqui */
	return 0;
}
```
Se quiser pode compilar esse trecho para ver que ele é válido. As chaves representam um bloco, ela que diz onde começa e onde termina o `main` e qualquer outro termo que precisa de um bloco. O termo `int` antes de `main` indica que precisamos dar um número inteiro para o sistema operacional representando se o programa terminou com sucesso ou não, neste caso estamos falando `return 0`, ou seja tudo deu certo.

Quando temos um identificador e alguma coisa (ou nenhuma) em parenteses é porque se trata de uma chamada de função, lembra muito do jeito que escrevemos no colégio `f(x)`. Aqui temos a chamada da função `printf` (Print Formatado) com o argumento `"Hello World\n"` nota(1,É um detalhe muito importante que em C as funções que estou comentando parecem mas não são exatamente as funções que viamos na matemática, iremos comentar sobre isso mais tarde.)