#include <string.h>
#include <stdio.h>
#include "teste.h"

void inicializarlista(Escola* lista){
    lista->primeiro = 0;
    lista->ultimo = lista->primeiro;
}
void EhVazia(Escola* lista){
    if(lista->primeiro==lista->ultimo){
        printf("É vazia");
    }
}
void inserirLista(Escola* lista, Salas valor){
    lista->escola[lista->ultimo] = valor;
    lista->ultimo++;
}
void RemoverLista(Escola* lista, int p, Salas* removido){
    *removido = lista->escola[p];
    for(int i = p+1;i<lista->ultimo;i++){
        lista->escola[i-1] = lista->escola[i+1];
    }lista->ultimo--;
}
void imprimir(Escola* lista){
    for(int i=lista->primeiro;i<lista->ultimo;i++){
        printf("Sala: %d\n", i);
        printf("Numero de Alunos na sala %d\n", lista->escola[i].aluno);
    }
}