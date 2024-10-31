#include <stdio.h>
void sort(int v[]);
int main(){
int carros[30], som=0;
for(int i=0;i<30;i++){
    scanf("%d", &carros[i]);
    som+=carros[i];
}
sort(carros);
printf("\nMedia = %d", som/30);
return 0;
}
void sort(int v[]){
    for(int i=0;i<29;i++){
        for(int j=0;j<29;j++){
            if(v[j]>v[j+1]){
                int aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }
    for(int i=0;i<30;i++){
        printf("%d ", v[i]);
    }
}