/*Faça um programa que crie um vetor de tamanho 25 preenchido com valores informados 
pelo teclado, e depois inverta a ordem do vetor (sem utilizar um segundo vetor)*/
#include <stdio.h>
int main(){
    int v [25];
    for(int i=0;i<25;i++){
        scanf("%d", &v[i]);
    }
    int u = 24;
    for(int j=0;j<12;j++){
        int aux = v[j];
        v[j] = v[u];
        v[u] = aux;
        u--;
    }
    for(int l=0;l<25;l++){
        printf("%d ", v[l]);
    }
    return 0;
}