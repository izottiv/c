#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tipoNo* tipoApontador;

typedef struct tipoNo
{
    int valor;
    tipoApontador Esq, Dir;
}tipoNo;

void Inicializacao(tipoApontador *no){
    *no = NULL;
}

void Inserir(tipoApontador* no, int valor){
    if(*no == NULL){
        *no = (tipoApontador)malloc(sizeof(tipoNo));
        (*no)->valor = valor;
        (*no)->Esq = NULL;
        (*no)->Dir = NULL;
    }
    else{
        if(valor<(*no)->valor){
            Inserir(&(*no)->Esq, valor);
        }
        else{
            Inserir(&((*no)->Dir), valor);
        }
    }
}



void antecessor(tipoApontador q, tipoApontador *r){
    tipoApontador aux;
    if((*r)->Dir != NULL){
        antecessor(q, &(*r)->Dir);
        return;
    }
    q->valor = (*r)->valor;
    aux = *r;
    *r = (*r)->Esq;
    free(aux);
}

void Retira(int vlr, tipoApontador *p){
    tipoApontador aux;
    if(*p == NULL){
        printf("O valor não esta na arvore");
        return;
    }
    if(vlr<(*p)->valor){
        Retira(vlr, &(*p)->Esq);
        return;
    }
    if(vlr>(*p)->valor){
        Retira(vlr, &(*p)->Dir);
        return;
    }
    if((*p)->Dir == NULL){
        aux = *p; *p = (*p)->Esq;
        free(aux);
        return;
    }
    if((*p)->Esq != NULL){
        antecessor(*p, &(*p)->Esq);
        return;
    }
    aux = *p; *p = (*p)->Dir;
    free(aux);
}
void Ordem(tipoApontador no){
    if(no!=NULL){
        Ordem(no->Esq);
        printf("%d ", no->valor);
        Retira(no->valor, &no);
        Ordem(no->Dir);
    }
}
int main(){
    tipoApontador NoRaiz;
    Inicializacao(&NoRaiz);
    int n;
    scanf("%d", &n);
    int aux;
    for(int k=0;k<n;k++){
        scanf("%d", &aux);
        Inserir(&NoRaiz, aux);
    } 
    printf("\n");
    Ordem(NoRaiz);
return 0;
}