#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "teste.h"

int main(){
    Salas sala1;
    Salas sala2;
    Escola school;
    sala1.aluno = 12;
    sala2.aluno = 5;
    inicializarlista(&school);
    EhVazia(&school);
    inserirLista(&school, sala1);
    inserirLista(&school, sala2);
    imprimir(&school);
    Salas dado;
    RemoverLista(&school, 1, &dado);
    imprimir(&school);
    return 0;
}