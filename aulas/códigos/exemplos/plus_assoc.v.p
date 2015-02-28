Theorema plus_assoc : Para todos n,m e p pertencente aos naturais,
  n + (m + p) = (n + m) + p.
Prova:
  Vamos fazer indução em "n".
  Caso base: "n = 0".
    Temos que a equação é "0 + (m + p) = (0 + m) + p"
    e é trivial mostrar isso.
  Caso indutivo: n é o sucessor de alguém.
    Se n é o sucessor de alguém então faça "n = n' + 1" e temos:
    " (n' + 1) + (m + p) = ((n' + 1) + m) + p."
    Mas isso é:
    "(n' + (m + p)) + 1 = ((n' + m) + p) + 1."
    Nossa hipotese de indução diz que para qualquer número menor que n temos que:
    "x + (m + p) = (x + m) + p."
    Então tome n' como x e faça a substituição:
    "((n' + m) + p) + 1 = ((n' + m) + p) + 1." 
    Agora os dois lados da igualdade são obviamente iguais.
Qed.