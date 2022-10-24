#include "funcoes_gerais.h"

void quick_sort(int vetor[], int tamanho){
    if(tamanho <=1) return;

    else{
        int x = vetor[0];
        int a = 1;
        int b = tamanho-1;

        do{

            while(a < tamanho && vetor[a] <= x) a++;
            while(vetor[b]>x) b--;

            if(a < b){
                troca(&a, &b);
                a++;
                b--;
            }

        }while(a <= b);

        /*troca pivô*/
        vetor[0] = vetor[b];
        vetor[b] = x;

        quick_sort(vetor, b);
        quick_sort(&vetor[a], tamanho-a);
    }   
}

