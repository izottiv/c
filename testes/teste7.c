#include <stdio.h>

// Função que agora retorna um inteiro
int saudacao() {
    printf("Olá, mundo!\n");
    return 0; // Retorna 0
}

int main() {
    int resultado = saudacao(); // Chama a função e armazena o valor de retorno
    printf("Valor retornado: %d\n", resultado); // Imprime o valor retornado
    return 0;
}