#include <stdio.h>
#include <stdlib.h>
#include "encad.h"

void inicializalista(listaa* lista){
    lista->Primeiro = (Apontador)malloc(sizeof(Celula));
    lista->Primeiro = lista->Ultimo;
    lista->Primeiro->proximo = NULL;
}
void Ehvazia(listaa* lista){
    if(lista->Primeiro == lista->Ultimo){
        printf("É vazia");
    }
}
void InserirNalista(listaa* lista, Sala* valor){
    lista->Ultimo->proximo = (Apontador)malloc(sizeof(Celula));
    lista->Ultimo = lista->Ultimo->proximo;
    lista->Ultimo->aluno = *valor;
    lista->Ultimo->proximo = NULL;

}
void RemoverdaLista(listaa* lista, Sala* valor){
    Celula* aux;
    *valor = lista->Ultimo->aluno;
    aux = lista->Primeiro;
    lista->Primeiro = lista->Primeiro->proximo;
    free(aux);
}
void imprimir(listaa* lista){
    Apontador aux;
    aux = lista->Primeiro->proximo;
    while (aux)
    {
        printf("Numero alunos: %d\n", aux->aluno.alunos);
    aux = aux->proximo;}
    
}
