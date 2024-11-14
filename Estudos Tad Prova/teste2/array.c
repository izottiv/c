#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

void InicializaListaVazia(ListaDados* lista){
    lista->primeiro = 0;
    lista->ultimo = lista->primeiro;
}
void eVaziaOuNao(ListaDados* lista){
    if(lista->primeiro == lista->ultimo){
        printf("A lista esta vazia");
    }
}
void InsereValor(ListaDados* lista, Dados dado){
    lista->listadados[lista->ultimo] = dado;
    lista->ultimo++;
}
void RetiraValor(ListaDados* lista, int posicao, Dados *valoretirado){
    *valoretirado = lista->listadados[posicao];
    for(int i=posicao;i<lista->ultimo;i++){
        lista->listadados[i-1] = lista->listadados[i];
    }
}
void ImprimeLista(ListaDados* lista){
    for(int i = 0;i<lista->ultimo;i++){
        printf("Nome : %s\nNumero : %d\nDia : %d", lista->listadados[i].nome, lista->listadados[i].numero, lista->listadados[i].dia);
    }
}
