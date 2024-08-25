#include<stdio.h>
int main(){
    int v[20];
    for (int i=0;i<20;i++){
        scanf("%d", &v[i]);
    }
    int maior = v[0], menor = v[0];
    for (int j=0;j<20;j++){
        if(maior<v[j]){
            maior = v[j];
        }
        if(menor>v[j]){
            menor = v[j];
        }
    }
    printf("Maior = %d\nMenor = %d\n", maior, menor);
    return 0;
}