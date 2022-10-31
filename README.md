
# Algoritmos de Ordenação
#### Trabalho para a disciplina de Programação de Computadores II

## Autor

- [@YureDomingues](https://github.com/YureDomingues)


## Introdução

Este é um relatório que visa comparar o desempenho entre alguns algoritmos de ordenação, o que eu escolhi para implementar de forma recursiva e de forma iterativo foi o Bubble Sort. Os outros são: Merge Sort e Quick Sort.

## Configurações

    • Processador: Intel(R) Core(TM) i5-3570 CPU @ 3.40GHz
    • Memória Principal: 16 GB DDR3 1333MHz
    • Compilador: GCC 11.3.0

## Tabelas

## Todos os resultados

|Teste| Nº Elementos | Bubble It  | Bubble Rec |  Merge   | Quick                                                |
|-----| ------------ | -----------| ---------- | -------- | --------- |
| 1   | 1.000        | 0,003s     | 0,003s     | < 1ms    | < 1ms     |
| 2   | 1.000        | 0,002s     | 0,002s     | < 1ms    | < 1ms     |
| 3   | 1.000    .   | 0,003s     | 0,003s     | < 1ms    | < 1ms     |
| 4   | 10.000       | 0,297s     | 0,248s     | 0,003s   | 0,001s    |
| 5   | 10.000       | 0,296s     | 0,245s     | 0,002s   | 0,001s    |
| 6   | 10.000       | 0,294s     | 0,252s     | 0,003s   | 0,001s    |
| 7   | 100.000      | 32,778s    | 27,061s    | 0,027s   | 0,027s    |
| 8   | 100.000      | 32,891s    | 27,141s    | 0,027s   | 0,022s    |
| 9   | 100.000      | 32,848s    | 27,114s    | 0,018s   | 0,021s    |
| 10  | 1.000.000    | > 30 min   | > 30 min   | 0,199s   | 1,246s    |
| 11  | 1.000.000    | > 30 min   | > 30 min   | 0,199s   | 1,253s    |
| 12  | 1.000.000    | > 30 min   | > 30 min   | 0,201s   | 1,262s    |
| 13  | 10.000.000   | > 30 min   | > 30 min   | 2,098s   | 115,149s  |
| 14  | 10.000.000   | > 30 min   | > 30 min   | 2,180s   | 115,975s  |
| 15  | 10.000.000   | > 30 min   | > 30 min   | 2,174s   | 116,030s  |

### Médias de Tempo

| Nº Elementos | Bubble It  | Bubble Rec |  Merge   | Quick                                                |
| ------------ | -----------| ---------- | -------- | ------    |
| 1.000        | 0,002s     | 0,002s     | < 1ms    | < 1ms     |
| 10.000       | 0,295s     | 0,248s     | 0,002s   | 0,001s    |
| 100.000      | 32,839s    | 27,105s    | 0,024s   | 0,023s    |
| 1.000.000    | > 30 min   | > 30 min   | 0,199s   | 1.253s    |
| 10.000.000   | > 30 min   | > 30 min   | 2,150s   | 115,718s  |


## Análise de resultados

#### Bubble Sort Recursivo comparado com Bubble Sort Iterativo

Em todos os casos testados o tempo de ordenação do o bubble recursivo ordenou o vetor em tempo igual ou inferior, tentendo a ser mais rápido que o outro quando maior o tamanho de elementos nele.

#### Merge Sort comparado com Quick Sort

Na ordenação de vetores com N <= 100.000 o Merge Sort teve desempenho igual ou inferior ao Quick Sort, Porém quando nos dois últimos testes onde a quantidade de elementos foi de 1 milhão e 10 milhões o Mege ganhou em desempenho com boa folga, sendo aproximadamente 6x mais veloz que o Quick para N no primeiro caso e mais 50x no segundo.

#### Bubble Sort mais veloz comparado ao Merge Sort e Quick Sort

O Bubble Sort perdeu em todos os casos de teste para os outros dois algoritmos. Isso já era experado pois a complexidade do Bubble Sort é O(N²), já a do Quick Sort é O(N.logN) no melhor/médio caso e O(n²) no pior, já o Merge Sort é O(N.logN) para todos os casos.
De forma bem resumida a complexidade "O-grande" expressa o quanto tempo computacional de execução de um algoritmo varia de acordo com o tamanho (N) do problema.


