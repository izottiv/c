#include <stdio.h>
int main(){
    int tam = 12;
    char c;
    scanf(" %c", &c);
    int count = 0;
    double M[tam][tam];
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    double soma = 0;
        for(int k=0;k<tam;k++){
            for(int l=0;l<tam;l++){
                if((k<l) && ((tam-1-k)<l)){
                    soma= soma + M[k][l];
                    count++;
                }
        }
    }
    float media = soma/count;
    if(c=='M' || c=='m'){
        printf("%.1lf\n", media);
    }
    else if (c=='S' || c=='s'){
        printf("%.1lf\n", soma);
    }
    return 0;
}