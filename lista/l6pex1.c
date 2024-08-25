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
    printf("%f %f\n", x, y);
    trocarval(&x,&y);
    printf("%f %f\n", x, y);
    return 0;
}
