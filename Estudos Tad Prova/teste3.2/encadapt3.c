#include <stdio.h>
#include <stdlib.h>
#include "encadapt3.h"

void Inicizalizar(Lista* lista){
    lista->primeiro = (Apontador)malloc(sizeof(celula));
    lista->ultimo = lista->primeiro;
    lista->primeiro->proximo = NULL;
}
int EhVazia(Lista* lista){
    return(lista->primeiro==lista->ultimo);
}
void InsereLista(Lista* lista, Dado* dado){
    lista->ultimo->proximo = (Apontador)malloc(sizeof(celula));
    lista->ultimo = lista->ultimo->proximo;
    lista->ultimo->valorzin = *dado;
    lista->ultimo->proximo = NULL;
}
void Removelista(Lista* lista, Dado* dado){
    celula* aux;
    *dado = lista->ultimo->valorzin;
    aux = lista->primeiro;
    lista->primeiro = lista->primeiro->proximo;
    free(aux);
}
void imprime(Lista* lista){
    Apontador aux;
    aux - lista->primeiro->proximo;
    while(aux){
        printf("%d\n", aux->valorzin.valor);
        aux = aux->proximo;
    }
}