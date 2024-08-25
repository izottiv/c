/* Escreva uma função que receba como parâmetros um vetor de inteiros e seu tamanho, sua 
função deve retornar o valor médio do vetor*/
#include <stdio.h>
int valor_medio(int v[], int tam){
    int som = 0;
    for (int i=0;i<tam;i++){
        som += v[i];
    }
    int media = som/tam;
    return media;
}
