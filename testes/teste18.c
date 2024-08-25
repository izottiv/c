#include <stdio.h>
void ZerarPar(int vetor[], int tam){
    for(int i=0; i<tam;i++){
        if(i % 2 == 0){
            vetor[i] = 0;
        }
    }
    for(int j=0;j<tam;j++){
        printf("%d ", vetor[j]);
        }
}
int main(){
    int v[30];
    for(int i=0;i<30;i++){
        scanf("%d", &v[i]);
    }
    ZerarPar(v, 30);
    return 0;
}