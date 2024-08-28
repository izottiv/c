/*Escreva uma função que receba como parâmetro um ponteiro para uma string e um caractere. Sua 
função deve substituir todas as ocorrências deste caractere no array pelo caractere de espaço em 
branco*/
#include <stdio.h>
#include <stdlib.h>
void substituirespaco(char *string, char caractere){
    while(*string!= '\0'){
        if(*string == caractere){
            *string = ' ';
        }
        string++;
    }
}