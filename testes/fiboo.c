#include <stdio.h>
int fibo(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    printf("quanots nmr");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        int fiboo = fibo(i);
        printf("%d ", fiboo);
    }
    return 0;
}
/*#include<stdio.h>
int fibonacci(int n) {
    if (n <= 1 ) {
        return n;
    } 
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Sequência de Fibonacci até o termo %d:\n", n);
    for (int i = 0; i < n; i++) {
        int fibo = fibonacci(i);
        printf("%d ", fibo);
    }
    printf("\n");
    return 0;
}*/