/*Escreva um programa que crie uma matriz 10x10 e preencha a matriz de forma que cada 
elemento do vetor seja a multiplicação do índice da posição da linha vezes a posição da 
coluna daquele elemento.
*/
#include <stdio.h>
int main(){
    int m[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            m[i][j] = i*j;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d ", m[i][j]);
        }
    printf("\n");
    }
    return 0;
}