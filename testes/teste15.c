#include <stdio.h>
int fatorial(int numero){
    int resultado = 1;
    for (int i=1;i<=numero;i++){
        resultado *= i;}
return resultado;
}
int fatorial2(int numero){
    int result = 1;
    while(numero>0){
        result *= numero;
        numero--;
    }return result;
}
int main(){
    int n;
    scanf("%d", &n);
    int r = fatorial2(n);
    printf("%d", r);
    return 0;
}