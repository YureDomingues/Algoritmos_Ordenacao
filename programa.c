#include <time.h>
#include <stdlib.h>
#include "funcoes_gerais.h"
#include "quick_sort.h"
#include "bubble_sort.h"

#define N 1000000
#define QTD_VETORES 3

int main(){

    clock_t t[QTD_VETORES];

    int **v;

    v = (int **) malloc(sizeof(int**)*QTD_VETORES);

    for(int i = 0; i< QTD_VETORES; i++){
        v[i] = (int*) malloc(sizeof(int*)*N);
    }

    gerar_vetores_aleatorios(QTD_VETORES, N, v);
    
    t[0]= clock();
    bubble_sort_rec(v[0], N);
    t[0]= clock() - t[0];

    t[1] = clock();
    bubble_sort_it(v[1], N);
    t[1] = clock() - t[1];

    t[2] = clock();
    quick_sort(v[1], N);
    t[2] = clock() - t[2];


    printf("Tempo Bubble Sort recursivo: %.3lf s\n", (t[0]/((double) CLOCKS_PER_SEC)));
    printf("Tempo Bubble Sort iterativo: %.3lf s\n", (t[1]/((double) CLOCKS_PER_SEC)));
    printf("Tempo Quick Sort: %.3lf s\n", (t[2]/((double) CLOCKS_PER_SEC)));

    for(int i = 0; i< QTD_VETORES; i++){
        free(v[i]);
    }

    free(v);


return 0;
}