#include <stdio.h>
#include <stdlib.h>
#include "partedoisencad.h"

void InicializaLista(Lista* listaszadas){
    listaszadas->Primeiro = (Apontador)malloc(sizeof(Celula));
    listaszadas->Ultimo = listaszadas->Primeiro;
    listaszadas->Primeiro->proximo = NULL;
}
int EhVazia(Lista* listaszadas){
    return(listaszadas->Primeiro==listaszadas->Ultimo);
}
void InserirValor(Lista* listaszadas, Dado* dadozadas){
    listaszadas->Ultimo->proximo = (Apontador)malloc(sizeof(Celula));
    listaszadas->Ultimo = listaszadas->Ultimo->proximo;
    listaszadas->Ultimo->valor = *dadozadas;
    listaszadas->Ultimo->proximo = NULL;
}
void RemoverValor(Lista* listaszadas, Dado* dadozadas){
    Celula* aux;
    if(EhVazia(listaszadas)){
        printf("Deu não");
        return;}
    *dadozadas = listaszadas->Primeiro->proximo->valor;
    aux = listaszadas->Primeiro;
    listaszadas->Primeiro = listaszadas->Primeiro->proximo;
    free(aux);
}
void ImprmirValor(Lista* listaszadas){
    Apontador aux;
    aux = listaszadas->Primeiro->proximo;
    while(aux){
        printf("%d\n", aux->valor.valor);
        aux = aux->proximo;}
}