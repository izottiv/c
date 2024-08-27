#include<stdio.h>
int main(){
    int tam;
    while (scanf("%d", &tam)!= EOF){
    int meio = tam/2, um = tam/3;
    int m[tam][tam];
    for(int i=0; i<tam; i++){
        for(int j=0;j<tam;j++){
            m[meio][meio] = 4;
            if(i>=um && j>=um && i<tam-um && j<tam-um){
                m[i][j] = 1;
            }
            else if(i==j){
                m[i][j] = 2;
            }
            else if((tam-i-1)==j){
                m[i][j] = 3;
            }
            else{
                m[i][j] = 0;
            } 
        }   
    }
    for(int i=0; i<tam; i++){
        for(int j=0;j<tam;j++){
            printf("%d ", m[i][j]);
        }
    printf("\n");
    }
    }
    return 0;
}
