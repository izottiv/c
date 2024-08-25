#include<stdio.h>
int print_matriz(int l, int M[l][l]){
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            printf("%d ", M[i][j]);
        }
    printf("\n");}
    
}
int main(){
    int matriz[3][3] = {0};
    print_matriz(3,matriz);
    return 0;
}