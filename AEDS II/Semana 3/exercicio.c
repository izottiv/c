#include <stdio.h>
#include <stdlib.h>

typedef struct tipoNo* tipoApontador;

typedef struct tipoNo
{
    int valor;
    tipoApontador Esq, Dir;
}tipoNo;

void Inicializa(tipoApontador* no){
    *no = NULL;
}

void Inserir(tipoApontador* no, int vlr){
    if(*no == NULL){
        (*no) = (tipoApontador)malloc(sizeof(tipoNo));
        (*no)->valor = vlr;
        (*no)->Dir = NULL;
        (*no)->Esq = NULL;
    }
    else if(vlr>(*no)->valor){
        Inserir(&(*no)->Dir, vlr);
    }
    else{
        Inserir(&(*no)->Esq, vlr);
    }
}

void Ordem(tipoApontador no){
    if(no!=NULL){
    Ordem(no->Esq);
    printf("%d ", no->valor);
    Ordem(no->Dir);
    
}
}


int main(){
    tipoApontador NoRaiz;
    Inicializa(&NoRaiz);
    int n, aux;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &aux);
        Inserir(&NoRaiz, aux);
    }
    Ordem(NoRaiz);
    return 0;
}