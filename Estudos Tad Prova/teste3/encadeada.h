#ifndef ENCADEADA_H_
#define ENCADEADA_H_
#define MaxTerm 100

typedef struct{
    char nome[255];
    int numero;
    int ano;
}Dados;

typedef struct Celula{
    Dados dado;
    struct Celula* proximo;
}Celulas;

typedef struct{
    struct Celula* primeiro;
    struct Celula* ultimo;
}Lista;

void LVazia(Lista* lista);
int EhVazia(Lista* lista);
void Insere(Lista* lista, Dados *dado);
void Retirar(Lista* lista, struct Celula* p, Dados *dado);
void Imprimir(Lista* lista);
#endif