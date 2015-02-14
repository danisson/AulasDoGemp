include(`macros.m4')
Entrada e Saída padrão e variáveis
==================================
aulaimg(2.png)
Nesta aula eu vou comentar de alguns conceitos básicos sobre programas no geral e como processar dados simples. Um comentário pertinente é que aqui eu não vou ensinar como escrever código seguro, em outras palavras, o estilo de escrita que estamos usando aqui é bem diferente do que se usa na vida real, o motivo disto é que na maratona precisamos escrever código rápido que recebe entradas bem comportadas. Nunca se esqueça que na vida real casos "não-comportados" são extremamente pertinentes.  
Enfim, na [aula passada](aula1.html) vimos como é escrito o famoso "Hello World" e agora iremos aprender o que está acontecendo e como escrever um código parecido.

Introdução
----------
<< Escrever alguma coisa não técnica / Não C >>

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

Quando temos um identificador e alguma coisa (ou nenhuma) em parênteses é porque se trata de uma chamada de função, lembra muito do jeito que escrevemos no colégio `f(x)`. Aqui temos a chamada da função `printf` (Print Formatado) com o argumento `"Hello World\n"`. nota(1,É um detalhe muito importante que em C as funções que estou comentando parecem mas não são exatamente as funções que viamos na matemática, iremos comentar sobre isso mais tarde.)

Uma coisa engraçada que a função `printf` não diz onde vai ser escrito o que foi passado a ela. Iremos comentar agora sobre uma coisa fundamental que é a entrada e a saída padrão.

Entrada e Saída padrão
----------------------
Podemos assumir que todo computador dá uma interface para o programador, a saída e entrada padrão. No caso comum, ela corresponde ao que pode ser escrito no terminal, mas podemos redirecionar a saída padrão para arquivos ou redirecionar arquivos para a entrada.

Aquela primeira linha `#include<stdio.h>` é um chamado pro compilador falando que você irá usar a biblioteca `stdio` que significa Standard Input/Ouput, dentro dela temos várias funções próprias para lidar com entrada e saída. As que você mais vai usar é o `printf` e o `scanf`. Elas são bem parecidas em relação aos seus argumentos, vamos ver um pedaço rápido de código:

```c
include(!@aulas/códigos/nome.c@!)
```
Este programa pergunta qual o nome do seu usuário e depois dá "bom dia" para ele. Aqui temos um conceito novo que é o de variáveis e de tipos, por enquanto, pense que variáveis são caixas que guardam valores e o tipo fala o que a caixa guarda. Por exemplo, se queremos números inteiros o tipo é `int`, se queremos caracteres sozinhos o tipo é `char`, depois iremos falar sobre mais tipos.

Podemos ver que as funções de entrada e saída formatada tem uma simetria na sua entrada, o primeiro argumento é o que chamamos de formato e ele segue algumas regrinhas: Tudo que começa com `%` indica que vamos receber ou escrever uma variável, normalmente o caractere depois indica qual o tipo da coisa que será escrita, no caso, estamos escrevendo e recebendo cadeias de caracteres `strings` e então estamos usando o identificador `%s`. No `scanf` temos algo um pouquinho mais complicado mas ele também serve pro `printf`, `%50s` indica que você estamos recebendo (ou enviando) no máximo 50 caracteres. nota(2,!@O que estamos chamando de caractere é meio que uma fabricação, certas letras ocupam mais que um caractere! Depois podemos falar sobre isso.@!)

Inteiros e entrada e saída
--------------------------
Vamos fazer um exemplo com números inteiros agora, o próximo programa irá pedir uma hora no horário de brasília (sem horário de verão) e mostra pro usuário que horas seria em Greenwich e no Acre.

```c
include(!@aulas/códigos/hora.c@!);
```
Eu recomendo entrar horas esquisitas ou fora do formato pra ver o quão errado dá o programa.
Como podemos ver, o formato para inteiros é `%d` porque iremos receber/escrever números em base decimal. Como podemos ver nesse exemplo as operações matemáticas normais estão disponíveis em C. Por exemplo, tente escrever um programa com a seguinte linha: `printf("%d\n",9/3);`, certamente irá aparecer `3` na tela. Veja este [anexo](aula2.anexo.html) para aprender mais sobre as operações de inteiros.

Como exercício, tente fazer um programa que recebe o nome do usuário (usando as idéias do programa anteior), receba o ano de nascimento e o ano atual e diga qual a idade do usuário. Se você estiver com problemas, tente fazer as coisas parte por parte e depois junte tudo.

URI Online Judge
----------------
Apartir de agora iremos passar exercícios para vocês do URI, ele é um repositório de problemas da maratona ou similares. Acesse ele [aqui](https://www.urionlinejudge.com.br/judge/login).

No final de cada aula teremos uma lista de problemas do URI que são relevantes ao conteúdo dado nessa aula. Uma coisa boa do URI é que ele tem um ranking, assim você pode acompanhar a posição dos seus amigos para competir. Se você ficar muito preso num problema tente tirar as dúvidas em sala ou no nosso [grupo do facebook](https://www.facebook.com/groups/169425793178096/).

Exercícios
----------
* urip(Extremamente Básico,1001)
* urip(Soma Simples,1003)
* urip(Produto Simples,1004)
* urip(Diferença,1007)

Imagens usadas
--------------
1. Fotografado por Emw [[CC BY-SA 3.0](http://creativecommons.org/licenses/by-sa/3.0)], via [Wikimedia Commons](http://commons.wikimedia.org/wiki/File%3AGates_of_Hell_sculpture_by_Rodin%3B_angled_view_from_left.JPG)
