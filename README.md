
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

## Médias de Tempo

| Nº Elementos | Bubble It  | Bubble Rec |  Merge   | Quick                                                |
| ------------ | -----------| ---------- | -------- | ------    |
| 1.000        | 0,002s     | 0,002s     | < 1ms    | < 1ms     |
| 10.000       | 0,295s     | 0,248s     | 0,002s   | 0,001s    |
| 100.000      | 32,839s    | 27,105s    | 0,024s   | 0,023s    |
| 1.000.000    | > 30 min   | > 30 min   | 0,199s   | 1.253s    |
| 10.000.000   | > 30 min   | > 30 min   | 2,150s   | 115,718s  |


## Análise de resultados


