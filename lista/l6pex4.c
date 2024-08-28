/*Aloque dinamicamente memória para um vetor de caracteres de tamanho 10 utilizando ponteiros. 
Utilizando a variável ponteiro criada, preencha cada posição do vetor com o caractere (char)
correspondente à sua posição (‘0’, ‘1’, ‘2’, ..., ‘9’)*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *ponteiro = (char*)malloc(10*sizeof(char));
    for (int i=0;i<10;i++){
        *(ponteiro+i) = '0' + i;
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", *(ponteiro+j));
    }
    free(ponteiro);
    
    return 0;
}
