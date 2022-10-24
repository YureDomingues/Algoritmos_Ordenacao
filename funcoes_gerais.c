#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

void imprimir_vetor(int vetor[], int n){
    for(int i=0; i<n; i++){
        printf("[%d]", vetor[i]);
    }
    printf("\n");
}

void gerar_numeros_aleatorios(int vetor[], int tamanho){
    srand(time(NULL));
    for(int i=0; i< tamanho; i++){
        vetor[i] = rand()%100;
    }
}
