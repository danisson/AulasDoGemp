include(`macros.m4')
Testes condicionais e ponto flutuante
=====================================
aulaimg(3.png)
<< Prefácio >>

Introdução
----------
<< Escrever alguma coisa não técnica / Não C >>

Um pouco de sintaxe
-------------------
```c
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
```
Como podemos ver o comando `if` induz um bloco de código que devemos delimitar com chaves. Depois da palavra temos uma expressão entre parenteses, aqui ela representa uma expressão booleana (Ou seja, que retorna verdadeiro ou falso), caso a expressão retorne verdadeiro o bloco delimitado pelo `if` é executado.

A parte sintática é bem simples, a causa de muitos erros é o que fica dentro dos parenteses e normalmente é difícil de perceber a causa.


Valores verdade
---------------
Nas especificações mais antigas da linguagem C (Que você irá usar) não existe a ideia do tipo `bool`, ou seja dos valores verdadeiro ou falso. É especificado que o valor `0` representa falso e qualquer coisa que não seja zero é verdadeiro, ou seja, `-1` é verdadeiro assim como `255`.

Existem alguns operadores que operam em valores "booleanos" e aqui está uma lista deles:

* `x == y` é a relação de igualdade, ela só compara valores primitivos nota(1,!@Não muito bem em valores de ponto flutuante mas isso é uma conversa para depois.@!), cuidado para não se confundir com o operador de atribuição `x = y`.
* `x > y` e `y > x` funcionam do jeito que esperamos.
* `x >= y` e `x <= y` é a versão maior-igual e menor-igual.
* `b1 && b2` representa a conjunção ou *and*, retorna verdadeiro se ambos forem verdadeiros.
* `b1 || b2` representa a disjunção ou *or*, retorna verdadeiro se algum for verdadeiro.

Manipulação de valores booleanos, ou seja lógica clássica, provavelmente será abordada pra vocês em Matemática Discreta e Círcuitos Digitais.

Ponto flutuante
---------------
Vamos parar para pensar um pouco como estamos trabalhando com números.

Todo computador tem uma memória RAM que seria o papel que ele trabalha enquanto segue nossos programas. Quando estamos trabalhando com números inteiros, um pedaço desse papel é usado para guardar ele e todos eles tem o mesmo tamanho para todos os números. Então não podemos guardar números reais porque no geral eles tem infinitas casas decimais, contudo, podemos guardar aproximações com um número de digitos significativos.

O que chamamos de pontos flutuantes é a notação ciêntifica que vimos no colégio (`a * 10^b`) sendo que `a` e `b` tem uma quantidade limitada de digitos. Isso traz alguns erros de aproximação e propriedades esquisitas mas ainda assim, é um jeito muito bom de tratar números com casas decimais de forma eficiente e genérica.


Biblioteca Matemática
----------------------
<< Explicação da biblioteca e como compilar com ela >>

<< Exemplos com tudo >>
-----------------------
<< Um código com tudo e comentários >>

Exercícios
----------
* urip(O Maior,1013)
* urip(Distância Entre Dois Pontos,1015)
* urip(Salário com Bônus,1009)
* urip(Números Pares,1059)
* urip(Números Positivos,1060)
* urip(Soma de Impares Consecutivos I,1071)

<!-- Imagens usadas -->
<!-- -------------- -->