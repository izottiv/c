#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DadosPessoais.h"

void InicializarLista(ListaDeDados* lista){
    lista->primeiro = 0;
    lista->ultimo = lista->primeiro;
}
void EhVazia(ListaDeDados* lista){
    if(lista->primeiro == lista->ultimo){
        printf("Esta vazia\n");
    }
}
void InserirNaLista(ListaDeDados* lista, Dados dado){
    if(lista->ultimo == MaxTerm){
        printf("A lista esta cheia\n");
    }
    else{
        lista->lista[lista->ultimo] = dado;
        lista->ultimo++;
    }
}
void RemoverItemLista(ListaDeDados* lista, int posicao, Dados* removido){
    if(lista->ultimo<=posicao){
        printf("Posicao Invalida\n");
    }
    else{
        *removido = lista->lista[posicao];
        for(int i=posicao+1;i<lista->ultimo;i++){
            lista->lista[i-1] = lista->lista[i];
        }
        lista->ultimo--;
    }
}
void imprimir(ListaDeDados* lista){
    for(int i=lista->primeiro;i<lista->ultimo;i++){
        printf("Dado %d\n", i);
        printf("Nome %s\n", lista->lista[i].nome);
        printf("Numero %d\n", lista->lista[i].numero);
        printf("Ano %d\n", lista->lista[i].ano);
    }
}