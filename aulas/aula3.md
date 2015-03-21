include(`macros.m4')
Testes condicionais e ponto flutuante
=====================================
aulaimg(3.png)
Como estavamos falando antes, programação é dar uma quantidade finita de ordens bem determinades para o computador, contudo, todas as ordens que vimos até agora foram sequênciais e não tem muita graça, normalmente, queremos explicar coisas que dependem de outras, por exemplo: "Se a comida parecer mofada, jogue fore senão coma". Isso aumenta muito a nossa expressividade podendo começar a resolver os problemas do URI mais simples.

Mas ainda assim, programas sem alguma forma de repetição ainda são bem limitados, mas entendo bem o conceito dos testes condicionais é bem fácil entender como os comandos de repetição funcionam.

Nesta aula iremos ver um pouco da sintaxe do `if` e uma discussão sobre proposições e valores verdade, depois disso iremos falar sobre pontos flutuantes e a biblioteca matemática do C.

Um pouco de sintaxe
-------------------
```c
include(!@aulas/códigos/segredo.c@!)
```
Como podemos ver o comando `if` induz um bloco de código que devemos delimitar com chaves. Depois da palavra temos uma expressão entre parenteses, aqui ela representa uma expressão booleana (Ou seja, que retorna verdadeiro ou falso), caso a expressão retorne verdadeiro o bloco delimitado pelo `if` é executado.

A parte sintática é bem simples, a causa de muitos erros é o que fica dentro dos parenteses e normalmente é difícil de perceber a causa.


Valores verdade
---------------
Nas especificações mais antigas da linguagem C (Que você irá usar) não existe a ideia do tipo `bool`, ou seja dos valores verdadeiro ou falso. É especificado que o valor `0` representa falso e qualquer coisa que não seja zero é verdadeiro, ou seja, `-1` é verdadeiro assim como `255`.

Existem alguns operadores que operam em valores "booleanos" e aqui está uma lista deles:

* `x == y` é a relação de igualdade, ela só compara valores primitivos rnota(1,!@Não muito bem em valores de ponto flutuante mas isso é uma conversa para depois.@!), cuidado para não se confundir com o operador de atribuição `x = y`.
* `x > y` e `y > x` funcionam do jeito que esperamos.
* `x >= y` e `x <= y` é a versão maior-igual e menor-igual.
* `b1 && b2` representa a conjunção ou *and*, retorna verdadeiro se ambos forem verdadeiros.
* `b1 || b2` representa a disjunção ou *or*, retorna verdadeiro se algum for verdadeiro.

Manipulação de valores booleanos, ou seja lógica clássica, provavelmente será abordada pra vocês em Matemática Discreta e Circuitos Digitais. Mas aqui iremos chamar as funções que retornam `int` mas com significado de valor verdade de proposições.

Ponto flutuante
---------------
Por causa das limitações do computador, não podemos colocar estruturas infinitas dentro dele, isso inclui os números reais. Ou seja, temos que dar um jeito de guardar aproximações finitas destes números, uma das ideias é pegar um número inteiro e considerar que as *n* primeiras casas decimais estão depois da vírgula e o resto está antes. Chamamos isso de **Ponto fixo** porque o ponto decimal não se mexe, parece uma abordagem muito boa contudo, programas que trabalham com simulação de gravidade precisam lidar com distâncias "pequenas" considerando simulações no planeta Terra e também de distâncias bem grandes tipo a colisão de duas galaxias. 

Por isso, foi inventado a representação do **Ponto flutuante**, ou seja, nossos números agora são um par $(n,e)$ que representam o número $n*2^{e-1}$ ou seja, todos os números binários $0.n*2^{e}$, o bom é que sempre temos a mesma quantidade de dígitos significativos mas podemos mudar a magnitude do número para ordens bem mais altas do que poderíamos. Contudo, por estarmos trabalhando com aproximações, algumas propriedades de números reais não funcionam.

Biblioteca Matemática
----------------------
<< Explicação da biblioteca e como compilar com ela >>

Exemplo da aula
-----------------------
```c
include(!@aulas/códigos/sqrt.c@!)
```
Podemos ver nesse código o uso do condicional e da biblioteca matemática, eu recomendo tentar passar números negativos ou remover o teste que checa o número. Lembrando que para compilar com o `math.h` devemos colocar a *flag* `-lm` no final do comando `gcc`.

Exercícios
----------
* urip(O Maior,1013)
* urip(Distância Entre Dois Pontos,1015)
* urip(Salário com Bônus,1009)
* urip(Números Pares,1059)
* urip(Números Positivos,1060)
* urip(Soma de Impares Consecutivos I,1071)