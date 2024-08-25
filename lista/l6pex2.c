/*Crie uma função void (ou seja que não possua um return) e que receba como parâmetros um valor 
tipo float e dois ponteiros para float. Sua função deve "armazenar" o quadrado do valor passado na 
primeira variável ponteiro e a raiz quadrada na segunda variável ponteiro.*/
#include <math.h>
void Quadrado(float v1, float *p1, float *p2){
    float quadrado = v1*v1;
    float raiz = sqrt(v1);
    *p1 = quadrado;
    *p2 = raiz;
}