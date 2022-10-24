#include "funcoes_gerais.h"
#include "quick_sort.h"
#include "bubble_sort.h"

int main(){

    int v[25];
    int u[25];

    gerar_numeros_aleatorios(v, 25);
    gerar_numeros_aleatorios(u, 25);

    printf("bubble_sort:\n");

    bubble_sort_rec(v, 25);
    imprimir_vetor(v, 25);

    printf("quick_sort:\n");

    quick_sort(u, 25);
    imprimir_vetor(u, 25);


return 0;
}