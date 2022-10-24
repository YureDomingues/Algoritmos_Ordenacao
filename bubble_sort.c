#include "funcoes_gerais.h"

void bubble_sort_it(int vetor[], int n){
    for(int i = n-1; i>=1; i--){
        int trocas = 0;

        for(int j=0; j<i;j++)
            if(vetor[j] > vetor[j+1]){
                troca(&vetor[j], &vetor[j+1]);
                trocas = 1;
        }
        if(troca == 0) return;

    }

}

void bubble_sort_rec(int vetor[], int n){  
    int troca=0;

    for(int j = 0; j<n-1; j++){
        if(vetor[j] > vetor[j+1]){
            int aux = vetor[j];
            vetor[j] = vetor[j+1];
            vetor[j+1] = aux;
            troca = 1;
        }
    }

    if(troca){
        bubble_sort_rec(vetor, n-1);
    }

}
