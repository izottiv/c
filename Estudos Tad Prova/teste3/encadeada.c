#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "encadeada.h"

void LVazia(Lista* lista){
    lista->primeiro = (struct Celula*) malloc(sizeof(Celulas));
    lista->ultimo = lista->primeiro;
    lista->primeiro->proximo = NULL;
}
int EhVazia(Lista* lista){
    if(lista->primeiro == lista->ultimo){
        return 0;
    }
}
void Insere(Lista* lista, Dados *dado){
    lista->ultimo->proximo = (struct Celula*) malloc(sizeof(Celulas));
    lista->ultimo = lista->ultimo->proximo;
    lista->ultimo->dado = *dado;
    lista->ultimo->proximo = NULL;
}
void Retirar(Lista* lista, Dados *dado){
    Celulas* aux;
    *dado = lista->primeiro->proximo->dado;
    aux = lista->primeiro;
    lista->primeiro = lista->primeiro->proximo;
    free(aux);
    if (lista->primeiro == NULL)
        lista->ultimo = NULL;

}
 void LImprime(Lista* lista)
 {
 struct Celula* Aux;
 Aux = lista->primeiro->proximo;
 while (Aux != NULL) 
{ 
printf("%d\n", Aux->dado.numero);
 Aux = Aux->proximo; /* próxima célula */
 }
 }