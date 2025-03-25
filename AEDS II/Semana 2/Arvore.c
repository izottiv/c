#include <stdio.h>
#include <stdlib.h>

typedef struct tipoNo* tipoApontador;

typedef struct tipoNo
{
    int n;
    tipoApontador esq, dir;
}tipoNo;

void inicializar(tipoApontador* no){
    *no = NULL;
}

void inserir(tipoApontador* no, int valor){
    if(*no==NULL){
        *no = (tipoApontador)malloc(sizeof(tipoNo));
        (*no)->n = valor;
        (*no)->esq = NULL;
        (*no)->dir = NULL;
    }
    else if(valor>((*no)->n)){
        inserir(&(*no)->dir, valor);
    }
    else{
        inserir(&(*no)->esq, valor);
    }
}

void Ordem(tipoApontador no){
    if (no != NULL) {  // Adicionando verificação para evitar acessar ponteiro nulo
        Ordem(no->esq);
        printf("%d ", no->n);  // Adicionando espaço para separar os números
        Ordem(no->dir);}
}

int main(){
    tipoApontador raiz;
    inicializar(&raiz);
    int n, aux;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &aux);
        inserir(&raiz, aux);
    }
    Ordem(raiz);
return 0;
}