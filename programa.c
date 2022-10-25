#include <time.h>
#include "funcoes_gerais.h"
#include "quick_sort.h"
#include "bubble_sort.h"

#define TAM_MAX 100000
#define QTD_VETORES 3

int main(){

    clock_t t[QTD_VETORES];

    int v[QTD_VETORES][TAM_MAX];

    gerar_vetores_aleatorios(QTD_VETORES, TAM_MAX, v);
    
    t[0]= clock();
    bubble_sort_rec(v[0], TAM_MAX);
    t[0]= clock() - t[0];

    t[1] = clock();
    bubble_sort_it(v[1], TAM_MAX);
    t[1] = clock() - t[1];

    t[2] = clock();
    quick_sort(v[1], TAM_MAX);
    t[2] = clock() - t[2];


    printf("Tempo Bubble Sort recursivo: %.3lf s\n", (t[0]/((double) CLOCKS_PER_SEC)));
    printf("Tempo Bubble Sort iterativo: %.3lf s\n", (t[1]/((double) CLOCKS_PER_SEC)));
    printf("Tempo Quick Sort: %.3lf s\n", (t[2]/((double) CLOCKS_PER_SEC)));

return 0;
}