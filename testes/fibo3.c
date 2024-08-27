#include <stdio.h>
int fibo(int n){
    if(n <=1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    printf("Quantidade de numeros de fibo: ");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        int fiboo = fibo(i);
        printf("%d ", fiboo);
    }
    printf("\n");
    return 0;
}