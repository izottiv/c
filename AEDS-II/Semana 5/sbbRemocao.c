#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void Ordem(TipoApontador No, int* contagem, int n){
    if(No!=NULL){
    Ordem(No->Esq, contagem, n);
    if(*contagem != n-1){
        printf("%s - ", No->estudante.nome);
        (*contagem)++;
    }
    else{
    printf("%s", No->estudante.nome);
}
    Ordem(No->Dir, contagem, n);
}
}

void EsqCurto(TipoApontador *Ap, short *Fim)
{ 
  TipoApontador Ap1;
  if ((*Ap)->BitE == Horizontal) 
  { (*Ap)->BitE = Vertical; *Fim = TRUE; return; }
  if ((*Ap)->BitD == Horizontal) 
  { Ap1 = (*Ap)->Dir; (*Ap)->Dir = Ap1->Esq; Ap1->Esq = *Ap; *Ap = Ap1;
    if ((*Ap)->Esq->Dir->BitE == Horizontal) 
    { DE(&(*Ap)->Esq); (*Ap)->BitE = Horizontal;}
    else if ((*Ap)->Esq->Dir->BitD == Horizontal) 
         { DD(&(*Ap)->Esq); (*Ap)->BitE = Horizontal; }
    *Fim = TRUE;
    return;
  }
  (*Ap)->BitD = Horizontal;
  if ((*Ap)->Dir->BitE == Horizontal) { DE(Ap); *Fim = TRUE; return; }
  if ((*Ap)->Dir->BitD == Horizontal) {  DD(Ap); *Fim = TRUE; }
}

void DirCurto(TipoApontador *Ap, short *Fim)
{ 
  TipoApontador Ap1;
  if ((*Ap)->BitD == Horizontal)
  { (*Ap)->BitD = Vertical; *Fim = TRUE; return; }
  if ((*Ap)->BitE == Horizontal) 
  { Ap1 = (*Ap)->Esq; (*Ap)->Esq = Ap1->Dir; Ap1->Dir = *Ap; *Ap = Ap1;
    if ((*Ap)->Dir->Esq->BitD == Horizontal) 
    { ED(&(*Ap)->Dir); (*Ap)->BitD = Horizontal; } 
    else if ((*Ap)->Dir->Esq->BitE == Horizontal) 
         { EE(&(*Ap)->Dir); (*Ap)->BitD = Horizontal;}
    *Fim = TRUE;
    return;
  }
  (*Ap)->BitE = Horizontal;
  if ((*Ap)->Esq->BitD == Horizontal) { ED(Ap); *Fim = TRUE; return; }
  if ((*Ap)->Esq->BitE == Horizontal) { EE(Ap); *Fim = TRUE; }
}  

void Antecessor(TipoApontador q, TipoApontador *r, short *Fim)
{ if ((*r)->Dir != NULL) 
  { Antecessor(q, &(*r)->Dir, Fim);
    if (!*Fim) DirCurto(r, Fim);
    return;
  }
  q->estudante = (*r)->estudante; q = *r; *r = (*r)->Esq; free(q);
  if (*r != NULL) *Fim = TRUE;
} 

void IRetira(Aluno x, TipoApontador *Ap, short *Fim)
{ TipoNo *Aux;
  if (*Ap == NULL) 
  { printf("Chave nao esta na arvore\n"); *Fim = TRUE; return; }
  if (x.altura < (*Ap)->estudante.altura) 
  { IRetira(x, &(*Ap)->Esq, Fim);
    if (!*Fim) EsqCurto(Ap, Fim);
    return;
  }
  if (x.altura > (*Ap)->estudante.altura) 
  { IRetira(x, &(*Ap)->Dir, Fim);
    if (!*Fim) DirCurto(Ap, Fim);
    return;
  }
  *Fim = FALSE; Aux = *Ap;
  if (Aux->Dir == NULL) 
  { *Ap = Aux->Esq;  free(Aux);
    if (*Ap != NULL) *Fim = TRUE;
    return;
  }
  if (Aux->Esq == NULL) 
  { *Ap = Aux->Dir; free(Aux);
    if (*Ap != NULL) *Fim = TRUE;
    return;
  }
  Antecessor(Aux, &Aux->Esq, Fim);
  if (!*Fim) EsqCurto(Ap, Fim); 
} 

void Retira(Aluno x, TipoApontador *Ap)
{ short Fim;
  IRetira(x, Ap, &Fim);
} 

void Pesquisa(Aluno *x, TipoApontador *p)
{ if (*p == NULL) 
  { return;
  }
  if(strcmp( x->nome, (*p)->estudante.nome)){
    Pesquisa(x, &(*p)->Esq);
    Pesquisa(x, &(*p)->Dir);
  }
  else{
  *x = (*p)->estudante;}
}

int main(){
    TipoApontador NoRaiz;
    Inicializacao(&NoRaiz);
    Aluno claudio, jose;
    int n, j, contagem = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s %d", claudio.nome, &claudio.altura);
        Insere(claudio, &NoRaiz);
    }
    scanf("%d", &j);
    n = n-j;
    for(int i=0;i<j;i++){
        scanf("%s", jose.nome);
        Pesquisa(&jose, &NoRaiz);
        Retira(jose, &NoRaiz);
    }
    Ordem(NoRaiz, &contagem, n);
    return 0;
}