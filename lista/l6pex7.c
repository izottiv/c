/*Agora escreva uma função que receba como parâmetro esse vetor de ponteiros de inteiros e o seu 
tamanho e sua função retorne a soma dos valores apontados deste vetor.*/
#include <stdio.h>
#include <stdlib.h>
int soma_vetor_ponteiros(int *vetor[], int tam){
    int soma = 0;
    for(int i=0;i<tam;i++){
        soma += *vetor[i];
    }
    return soma;
}