#ifndef ARRAY_H_
#define ARRAY_H_
#define MaxTermo 100

typedef struct{
    char nome[12];
    int numero;
    int dia;
}Dados;

typedef struct{
    Dados listadados[MaxTermo];
    int primeiro;
    int ultimo;
}ListaDados;

void InicializaListaVazia(ListaDados* lista);
void eVaziaOuNao(ListaDados* lista);
void InsereValor(ListaDados* lista, Dados dado);
void RetiraValor(ListaDados* lista, int posicao, Dados *valoretirado);
void ImprimeLista(ListaDados* lista);

#endif