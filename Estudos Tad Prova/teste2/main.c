#include "array.h"
#include <stdio.h>
#include <string.h>


int main(){

    ListaDados jorge;
    Dados legal;
    strcpy(legal.nome, "Abc");
    legal.numero = 12;
    legal.dia = 1;
    InicializaListaVazia(&jorge);
    InsereValor(&jorge, legal);
    Dados avoltadosqunaoforam;
    RetiraValor(&jorge, 0, &avoltadosqunaoforam);
    ImprimeLista(&jorge);

    return 0;
}