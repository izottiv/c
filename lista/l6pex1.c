/*Escreva uma função que receba como parâmetros dois ponteiros para float e troque os valores 
apontados pelos ponteiros*/
#include <stdio.h>
#include <stdlib.h>
void trocarval(float *x, float*y){
    float aux = *y;
    *y = *x;
    *x = aux;
}
int main(){
    float x = 1.2, y = 12;
    float *px = &x, *py=&y;
    printf("%f %f\n", x, y);
    trocarval(px,py);
    printf("%f %f\n", *px, *py);
    return 0;
}
