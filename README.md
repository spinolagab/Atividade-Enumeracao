## Enunciado da questão:
Dada uma sequência de números inteiros com n elementos, faça uma função para determinar o comprimento de um segmento crescente de comprimento máximo.
Exemplos: Na sequência 5 10 3 2 4 7 9 8 5 o comprimento do segmento crescente máximo
é 4 (2, 4, 7, 9).
Na sequência 10 8 7 5 2 o comprimento de um segmento crescente máximo é 1.
Qual é complexidade da sua função ?

A função abordada em questão tem complexidade O(n), isso pois a função acaba por usar 1 único for para percorrer a sequência, comparando os números e verificando se as condições foram atendidas ou não.
Optei por usar alocação dinâmica de memória pois os casos de teste tinham tamanhos diferentes e não foi especificado exatamente como seria a entrada.
Isso foi feito somente para facilitar os testes na main.
