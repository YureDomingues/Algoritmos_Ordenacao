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

void gerar_vetores_aleatorios(int qtd_vetores, int tamanho, int **matriz){
    srand(time(NULL));

    for(int i=0; i< tamanho; i++){

        int numero = rand()%1000;
        
        for(int j=0; j<qtd_vetores;j++){
            matriz[j][i] = numero;
        }
        
    }
}
