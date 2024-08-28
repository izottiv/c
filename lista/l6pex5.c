/*Escreva um programa que peça ao usuário que digite um valor inteiro N e, em seguida, declare 
dinamicamente um vetor (usando malloc) de inteiros de tamanho N e preencha-o com 0s. Utilize um
ponteiro para percorrer o vetor (Não utilize colchetes*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int *pontn = (int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        *(pontn+i) = 0;
    }
    for (int i=0;i<n;i++){
        printf("%d ", *(pontn+i));
    }
    free(pontn);
    return 0;
}