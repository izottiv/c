#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[50];
    for (int i=0;i<50;i++){
        v[i] = i+1;
    }
    int soma;
    for(int j=0;j<50;j++){
        soma += v[j]; 
    }
    printf("Soma = %d\n", soma);
    return 0;
}