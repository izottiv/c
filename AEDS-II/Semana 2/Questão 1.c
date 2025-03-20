#include <stdio.h>
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

void Ordem(tipoApontador no){
    if(no!=NULL){
        Ordem(no->Esq);
        printf("%d ", no->valor);
        Ordem(no->Dir);
    }
}

void PreOrdem(tipoApontador no){
    if(no!=NULL){
        printf("%d ",no->valor);
        PreOrdem(no->Esq);
        PreOrdem(no->Dir);
    }
}

void PosOrdem(tipoApontador no){
    if(no!=NULL){
        PosOrdem(no->Esq);
        PosOrdem(no->Dir);
        printf("%d ", no->valor);
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
    printf("Pré-Ordem: ");
    PreOrdem(NoRaiz);
    printf("\n");
    printf("Em Ordem: ");
    Ordem(NoRaiz);
    printf("\n");
    printf("Pós-Ordem: ");
    PosOrdem(NoRaiz);
return 0;
}