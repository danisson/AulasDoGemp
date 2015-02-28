include(`macros.m4')
Exemplos de programas em várias linguagens
==========================================
Essa parte da aula é mais uma curiosidade do que uma aula mesmo, aqui eu irei mostrar alguns programas simples e o que eles fazem em pseudo-código. A maior parte deles funcionam recebendo dados da entrada padrão e escrevendo resultados na saída padrão do mesmo jeito que será feito na maratona, se algum código trata a entrada e saída de forma diferente iremos comentar.

comp(Teste de primalidade - C,primo.c)
Este algoritmo realiza o teste de primalidade mais simples e é o menos eficiente. Não é difícil ver porque só precisamos checar os fatores menores ou iguais à raíz do número, tente pensar no motivo separando o número em dois fatores quaisquer.

comp(Números de Fibonnaci - Javascript,fib.js)
Tente abrir seu navegador e colar esse código (Normalmente no F12) no console, depois faça `fibonacci(10)`, Javascript é uma linguagem bem popular hoje em dia porque todos os navegadores suportam ela.

Este exemplo usa uma idéia chamada *recursão* é uma função que chama ela mesma, escrevendo uma função desse tipo sem pensar pode tornar ela um loop infinito, mas a maior parte das recursões são bem pensadas para ter um caso *base* que termina. Aqui temos que zero e um são os casos base do fibonacci.

comp(Encontrar a raíz quadrada de um número - C,newton.c)
Uma versão mais geral desse algoritmo foi descoberto por Newton e ele é bem rápido e simples, provavelmente sua calculadora usa esse método para descobrir raízes quadradas e outros valores. Ele segue uma ideia bem geral que é: começando com um chute, vamos melhorando passo-a-passo esse chute até um erro aceitável, aqui dissemos que os cinco primeiros dígitos tem que ser corretos o resto não importa. Esses algoritmos de aproximação são bem importantes porque funções complexas como seno e cosseno não são "primitivas" no computador e temos que inventar um jeito de calcular elas usando somente as quatro operações elementares.

comp(Encontrar o MDC de um número - Haskell,euclides.hs)
Este exemplo foi feito na linguagem Haskell, ela é linguagem funcional pura, ou seja, não podemos colocar variáveis em qualquer lugar do código e muitas vezes não iremos mudar o valor delas depois de inicializar. Ela está ficando muito popular esses dias porque existem vantagens enormes quando vamos rodar um programa desse em CPUs de vários núcleos (Intel i3 ou i5, por exemplo) ou com vários computadores trabalham cooperativamente.

Esse algoritmo inventado por Euclides na antiguidade encontra o maior divisor comum entre dois números e tem muitas aplicações em coisas relacionadas com Teoria dos Números, criptografia é um exemplo dessas coisas.

comp(Prova da associatividade da soma - Coq,plus_assoc.v)
