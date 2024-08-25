/*Escreva um programa que leia do teclado valores para um vetor de 20 posições. Depois 
imprima qual é o maior e m ostre também em qual posição ele se encontra.*/
#include <stdio.h>
int main(){
    int v[20];
    for (int i=0;i<20;i++){
        scanf("%d", &v[i]);
    }
    int maior = v[0], pos = 0;
    for(int j=0;j<20;j++){
        if(v[j]>maior){
            int aux = maior;
            maior = v[j];
            v[j] = aux;
            pos = j;
        }
    }
    printf("O maior número é: %d\n", maior);
    printf("O posição do maior número é: %d\n", pos);
    return 0;
}