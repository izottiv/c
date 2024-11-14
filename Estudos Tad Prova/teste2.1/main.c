#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DadosPessoais.h"

int main(){
    Dados dadin;
    strcpy(dadin.nome, "Vitas");
    dadin.numero = 10;
    dadin.ano = 2005;
    Dados dadin2;
    strcpy(dadin2.nome, "Roger");
    dadin2.numero = 20;
    dadin2.ano = 2012;
    ListaDeDados listona;
    InicializarLista(&listona);
    printf("Vazia\n");
    EhVazia(&listona);
    InserirNaLista(&listona, dadin);
    InserirNaLista(&listona, dadin2);
    printf("Imprimir antes remover\n");
    imprimir(&listona);
    Dados roger;
    printf("Removeu da lista\n")
;    RemoverItemLista(&listona, 1, &roger);
    imprimir(&listona);
    return 0;
}