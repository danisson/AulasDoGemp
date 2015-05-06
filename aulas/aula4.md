include(`macros.m4')
Iteração e vetores
==================
aulaimg(4.png)
Quando estávamos mexendo com teste condicional, foi comentado que precisamos de só mais alguma coisa pra poder expressar qualquer programa que quisermos. O que faltava era uma forma de repetir código sem precisar escrever ele de forma repetida, isso fica mais claro quando estamos trabalhando com listas de números.

Toda linguagem de programação tem algum artifício para o usuário guardar uma quantidade arbitrária de coisas num único nome, ou seja, podemos ter uma variável `listaDePudim` que guarda uma certa quantidade de coisas, para acessar algo sempre existe um sintaxe do jeito `listaDePudim[0]`. Quando uma lista de elementos tem tamanho fixo e todos os seus elementos estão um do lado do outro (em memória) chamamos ela de *vetor*, em C os vetores são a forma que a linguagem dá nativamente para fazer listas de elementos. Depois iremos ver como implementar outras formas de agrupamentos de objetos.

Nas linguagens baseadas em C, a indexação dos elementos começam no zero, ou seja, o primeiro elemento está na zero-ésima posição. Esta é uma forma bem natural de acessar os elementos e iremos explicar isso mais tarde.

Um pouco de sintaxe
-------------------
```c
include(!@aulas/códigos/segredo2.c@!)
```
Aqui temos o nosso código do segredo, porém se o usuário não acerta o número na primeira tentativa o programa continua executando até que o usuário entre o número certo.

Podemos ver que agora tem um comando parecido com o `if`, mas ele é usa a palavra `while`. O significado disso é "Enquanto a condição não for verdadeira, continue executando esse código", nesse caso, o programa continuará pedindo um novo `n` até que ele seja igual à `secreto`. Ou seja, o `while` é um `if` que repete o seu bloco até que a condição se torne falsa.

Laço for
--------
<< Exemplo e explicação do laço for>>  
<< Comparação com o while>>  
<< Para todo i, ... >>  

Vetores e entrada/saída
-----------------------
<< Explicação de vetores >>  
<< Como mostrar um vetor usando for >>  
<< Como receber um vetor do jeito da maratona >>  

<< TO DO>>

Exercícios
----------
* urip(PUM,1142)
* urip(Números Pares,1059)
* urip(Números Positivos,1060)

<!-- Imagens usadas -->
<!-- -------------- -->
