#include <time.h>
#include <stdlib.h>
#include "funcoes_gerais.h"
#include "quick_sort.h"
#include "bubble_sort.h"
#include "merge_sort.h"

#define QTD_VETORES 4

int main(){

    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    clock_t t[QTD_VETORES];

    int **v;

    v = (int **) malloc(sizeof(int**)*QTD_VETORES);

    for(int i = 0; i< QTD_VETORES; i++){
        v[i] = (int*) malloc(sizeof(int*)*n);
    }

    gerar_vetores_aleatorios(QTD_VETORES, n, v);

    t[0] = clock();
    mergeSort(v[0], 0, n);
    t[0] = clock() - t[0];
    printf("Tempo Merge Sort: %.3lfs\n", (t[0]/((double) CLOCKS_PER_SEC)));

    t[1] = clock();
    quick_sort(v[1], n);
    t[1] = clock() - t[1];

    printf("Tempo Quick Sort: %.3lfs\n", (t[1]/((double) CLOCKS_PER_SEC)));

    t[2]= clock();
    bubble_sort_rec(v[2], n);
    t[2]= clock() - t[2];

    printf("Tempo Bubble Sort recursivo: %.3lfs\n", (t[2]/((double) CLOCKS_PER_SEC)));

    t[3] = clock();
    bubble_sort_it(v[3], n);
    t[3] = clock() - t[3];
    
    printf("Tempo Bubble Sort iterativo: %.3lfs\n", (t[3]/((double) CLOCKS_PER_SEC)));


    for(int i = 0; i< QTD_VETORES; i++){
        free(v[i]);
    }

    free(v);


return 0;
}