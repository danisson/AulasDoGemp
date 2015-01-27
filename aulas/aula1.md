include(`macros.m4')
Sobre programação e Hello World
===============================
aulaimg(1.png)
Nesta aula iremos falar um pouco sobre o que é programação, como será seu primeiro programa em C e como compila-lo.
Antes de tudo, recomendamos que você use alguma distribuição do [Linux][1].
As distribuições mais recomendadas para iniciantes são [Ubuntu][2] e [Mint][3]. Isto é importante porque na [Maratona][4] todos os computadores estarão usando Linux.

[1]: http://pt.wikipedia.org/wiki/Linux "Kernel Linux"
[2]: http://www.ubuntu.com/ "Ubunto Linux"
[3]: http://www.linuxmint.com/ "Linux Mint"
[4]: http://maratona.ime.usp.br/ambiente14.html "Ambiente computacional da Maratona"

Introdução
----------
Quando queremos ensinar alguém a resolver um problema é muito comum descrever o que deve ser feito num passo-a-passo. Programação é algo bem parecido com isto mas, quando estamos falando com pessoas elas podem entender as partes incompletas e até mesmo modificar os passos de acordo com sua necessidade. Um computador não tem a capacidade de modificar o que foi dado a ele por conta própria e nem completar o que não foi dito, por isso, devemos explicar claramente o que deve ser feito. nota(1,
Existem outras formas de computação que não envolve uma sequência de passo-a-passo mas isto está fora do escopo do grupo.)

Em outras palavras, você dá um conjunto de operações não ambíguas e o seu computador executa essas operações de forma sequêncial. Existe alguns conceitos que iremos praticar ao longo das aulas e que são essenciais para programação.

Começando a programar
---------------------
O primeiro passo para começar a programar é usar um *editor de texto*. Isso é importante porque não queremos que algo lhe atrapalhe ao escrever o código. Os editores que com certeza estarão na maratona são: vim, nano, emacs e gedit. Somente os dois últimos são gráficos, ou seja, vim e nano rodam por padrão num terminal. nota(2,!@Existe o gvim, uma interface gráfica para o vim, mas quase tudo ainda é feito por comandos baseados em texto no gvim.@!)

Na computação existe uma certa "guerra santa" de qual seria o melhor editor de texto mas, aqui iremos assumir que você está usando o gedit. Recomendamos a leitura do [anexo](anexo1.html) explicando algumas configurações do gedit e o que achamos de cada uma desrtas configurações.

Mas no fim das contas o mais importante é ter em mente o procedimento que deve ser feito antes de sair escrevendo no editor de texto ou na sua linguagem de programação favorita. Ter o que deve ser feito em mente ajuda na separação de erros lógicos (ou seja, no passo-a-passo a ser dado para o computador) com erros de uso da linguagem (uso errado da sintaxe, por exemplo).

A linguagem C
-------------
rimg(1ritchie.png,150)
A linguagem de programação C é uma linguagem que surgiu para o público em 1972 feita por Dennis Ritchie. Ela é bastante popular com aplicações que precisam de performance tanto em tempo de execução quanto em tamanho. Ela e sua derivada (C++) são as linguagens principais da maratona, por isso iremos aprender a usar ela.  

Basicamente a linguagem é uma série de comandos usando o alfabeto do inglês e símbolos matemáticos e cada comando é separado por ponto-e-virgula. Alguns programas podem ser vistos, como exemplo, neste [link](aula1.exemplos.html).  

Qualquer um pode criar uma linguagem de programação mas ela só passa a ter alguma utilidade se podemos transformar este texto num arquivo executável pelo computador. Este processo é chamado de "compilação" e o aplicativo responsável por isso é o compilador. Iremos usar o compilador *gcc* que está presente por padrão em muitas distribuições do Linux e é usado na Maratona.

Hello World
-----------
Então, abrindo seu editor favorito, vamos escrever código! Iremos começar com códigos bem famosos, primeiramente um "Hello World" e depois o "algoritmo de Trabb Pardo–Knuth".  

No começo da aula eu usava o termo "passo-a-passo" mas o termo verdadeiro é "algoritmo", algoritmos são um das bases teóricas da programação, aqui iremos descrever nossos algoritmos em "pseudo-C", ou seja, iremos descrever algo bem parecido com o C mas sem muita pressão na sintaxe ou na precisão do que estamos dizendo. O que realmente queremos é transmitir a idéia da solução mas sem perder a idéia de o quão demorado ou o quão rápido são certas operações.  

Neste caso eu adicionei a descrição do algorítmo no próprio código por ser um caso muito simples, mas quanto mais complexo vai ficando nossos problemas, mais complicado fica de explicar as formas desse jeito. Vamos começar escrevendo isso:

```c
#include<stdio.h>

int main() // Comece daqui
{	printf("Hello World!\n"); // Escreva "Hello World" e quebre a linha
	return 0; // Terminei com sucesso
}
```

Agora salve como algum nome e termine com ".c", por exemplo "hello.c", na área de trabalho. Iremos usar este nome para esse arquivo. Pronto! Este é o seu primeiro programa em C a ideia é que ele escreva "Hello World" na janela e termine. Agora temos que transformar este texto num arquivo executável pelo computador.

Compilando seu primeiro programa
--------------------------------
Para usá-lo precisaremos abrir o terminal (Control+Alt+T nas distribuições recomendadas), navegar até o diretório que você salvou o arquivo e executá-lo.  

Quando abrimos o terminal ele estará no diretório do seu usuário chamado de `home` ou `~`. Para acessar a área de trabalho basta escrever `cd Área\ de\ Trabalho`{.bash}. Se você escrever `ls`{.bash} irá aparecer uma lista de arquivos e certamente "hello.c" estará lá.  

Para compilar o programa, agora iremos fazer `gcc arquivo.c -o executavel` ou seja:

```bash
gcc hello.c -o hello
```

Veja os arquivos da pasta, se tudo deu certo "hello" irá aparecer lá. Para executar basta entrar `./hello`. Pronto, escrevemos, compilamos e executamos nosso primeiro programa em C, contudo não sabemos muita coisa do que está escrita nele. Agora iremos examinar o que está acontecendo aí.