#include <stdio.h>
#include <stdlib.h>
#define tamanho 50
#define TRUE  1
#define FALSE 0

typedef struct
{
    char nome[tamanho];
    int altura;
}Aluno;


typedef enum {
Vertical, Horizontal
} TipoInclinacao;

typedef struct TipoNo* TipoApontador;

typedef struct TipoNo {
    Aluno estudante;
    TipoApontador Esq, Dir;
    TipoInclinacao BitE, BitD;
} TipoNo;

void Inicializacao(TipoApontador *no){
    *no = NULL;
}

void EE(TipoApontador *Ap){ 
    TipoApontador Ap1;
    Ap1 = (*Ap)->Esq; (*Ap)->Esq = Ap1->Dir; Ap1->Dir = * Ap;
    Ap1->BitE = Vertical; (*Ap)->BitE = Vertical; * Ap = Ap1;
}

void ED(TipoApontador *Ap){ 
    TipoApontador Ap1, Ap2;
    Ap1 = (*Ap)->Esq; Ap2 = Ap1->Dir; Ap1->BitD = Vertical;
    (*Ap)->BitE = Vertical; Ap1->Dir = Ap2->Esq; Ap2->Esq = Ap1;
    (*Ap)->Esq = Ap2->Dir; Ap2->Dir = * Ap; * Ap = Ap2;
}

void DD (TipoApontador *Ap){ 
    TipoApontador Ap1;
    Ap1 = (*Ap)->Dir; (*Ap)->Dir = Ap1->Esq; Ap1->Esq = * Ap;
    Ap1->BitD = Vertical; (*Ap)->BitD = Vertical; * Ap = Ap1;
}

void DE (TipoApontador *Ap){ 
    TipoApontador Ap1, Ap2;
    Ap1 = (*Ap)->Dir; Ap2 = Ap1->Esq; Ap1->BitE = Vertical;
    (*Ap)->BitD = Vertical; Ap1->Esq = Ap2->Dir ; Ap2->Dir = Ap1;
    (*Ap)->Dir = Ap2->Esq; Ap2->Esq = * Ap; * Ap = Ap2;
}

void IInsere(Aluno x, TipoApontador *Ap, 
    TipoInclinacao *IAp, short *Fim){ 
        if (*Ap == NULL) { 
        *Ap = (TipoApontador)malloc(sizeof(TipoNo));
        *IAp = Horizontal;  (*Ap)->estudante = x;
        (*Ap)->BitE = Vertical;  (*Ap)->BitD = Vertical;
        (*Ap)->Esq = NULL; (*Ap)->Dir = NULL; *Fim = FALSE;
return;
}

if (x.altura < (*Ap)->estudante.altura) { 
    IInsere(x, &(*Ap)->Esq, &(*Ap)->BitE, Fim);
    if (*Fim) return;
    if ((*Ap)->BitE != Horizontal) { *Fim = TRUE; return; }
    if ((*Ap)->Esq->BitE == Horizontal) 
    { EE(Ap); *IAp = Horizontal; return; }
    if ((*Ap)->Esq->BitD == Horizontal) { ED(Ap); *IAp = Horizontal; }
    return;
}

if (x.altura <= (*Ap)->estudante.altura) { 
    printf("Erro: Chave ja esta na arvore\n");
    *Fim = TRUE;
    return;
}

IInsere(x, &(*Ap)->Dir, &(*Ap)->BitD, Fim);
if (*Fim) 
return;
if ((*Ap)->BitD != Horizontal) { 
    *Fim = TRUE;  
    return; 
}
if ((*Ap)->Dir->BitD == Horizontal) { 
    DD(Ap); *IAp = Horizontal; 
    return;
}
if ((*Ap)->Dir->BitE == Horizontal) { 
    DE(Ap); *IAp = Horizontal; 
}
}

void Insere(Aluno x, TipoApontador *Ap)
{ short Fim;  TipoInclinacao IAp;
  IInsere(x, Ap, &IAp, &Fim);
} 

void Ordem(TipoApontador No){
    if(No!=NULL){
    Ordem(No->Esq);
    if(No->Dir == NULL){
        printf("%s", No->estudante.nome);
    }
    else{
    printf("%s - ", No->estudante.nome);
}
    Ordem(No->Dir);
}
}

int main(){
    TipoApontador NoRaiz;
    Inicializacao(&NoRaiz);
    Aluno claudio;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s %d", claudio.nome, &claudio.altura);
        Insere(claudio, &NoRaiz);
    }
    Ordem(NoRaiz);
    return 0;
}