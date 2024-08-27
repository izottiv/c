#include <stdio.h>
int main(){
    int lin, col;
    scanf("%d %d", &lin, &col);
    int m[lin][col];
    for(int i=0; i<lin;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &m[i][j]);
        }
    }
    int primeironnulo[lin];
    for(int i = 0;i<lin;i++){
        primeironnulo[i] = 500+i;
    }
    for(int i=0; i<lin;i++){
        for(int j=0;j<col;j++){
            if (m[i][j]!=0){
                primeironnulo[i] = j;
                break;
            }
        }}
    int v = 1;
    for(int i = 1; i < lin; i++){
        if(primeironnulo[i]<=primeironnulo[i-1]){
            v = 0;
        }}
    if(v == 1 ){
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}