/*Escreva um programa que declare um vetor de ponteiros de inteiros de tamanho 10 e preencha o 
vetor com ponteiros alocados dinamicamente pelo código.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro[10];
    for (int i=0;i<10;i++){
        ponteiro[i] = (int*)malloc(sizeof(int));
        if (ponteiro[i] == NULL){
            printf("Não é possivel alocar");
        }
    }
    for (int i=0;i<10;i++){
        free(ponteiro[i]);
    }
    return 0;
}