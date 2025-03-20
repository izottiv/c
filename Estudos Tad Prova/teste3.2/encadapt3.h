#ifndef ENCADAPT3_H_
#define ENCADAPT3_H_

typedef struct
{
    int valor;
}Dado;

typedef struct cel* Apontador;
typedef struct cel{
    Dado valorzin;
    Apontador proximo;
}celula;

typedef struct{
    Apontador primeiro;
    Apontador ultimo;
}Lista;

void Inicizalizar(Lista* lista);
int EhVazia(Lista* lista);
void InsereLista(Lista* lista, Dado* dado);
void Removelista(Lista* lista, Dado* dado);
void imprime(Lista* lista);

#endif