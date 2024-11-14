#ifndef DADOSPESSOAIS_H_
#define DADOSPESSOAIS_H_    
#define MaxTerm 100

typedef struct{
    char nome[255];
    int numero;
    int ano;
}Dados;

typedef struct{
    Dados lista[MaxTerm];
    int primeiro, ultimo;
}ListaDeDados;

void InicializarLista(ListaDeDados* lista);
void EhVazia(ListaDeDados* lista);
void InserirNaLista(ListaDeDados* lista, Dados dado);
void RemoverItemLista(ListaDeDados* lista, int posicao, Dados* removido);
void imprimir(ListaDeDados* lista);


#endif