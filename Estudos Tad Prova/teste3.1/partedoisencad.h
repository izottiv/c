#ifndef PARTEDOISENCAD_H_
#define PARTEDOISENCAD_H_

typedef struct{
    int valor;
}Dado;

typedef struct cel* Apontador;
typedef struct cel{
    Dado valor;
    struct cel* proximo;
}Celula;

typedef struct{
    Apontador Primeiro;
    Apontador Ultimo;
}Lista;

void InicializaLista(Lista* listaszadas);
int EhVazia(Lista* listaszadas);
void InserirValor(Lista* listaszadas, Dado* dadozadas);
void RemoverValor(Lista* listaszadas, Dado* dadozadas);
void ImprmirValor(Lista* listaszadas);

#endif
