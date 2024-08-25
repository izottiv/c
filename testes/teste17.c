#include <stdio.h>
int main(){
    int x = 1, y = 1, n, aux;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        printf("%d ", x);
        aux = x;
        x += y;
        y = aux;
    }
    return 0;
}