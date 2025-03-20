#ifndef ENCAD_H_
#define ENCAD_H_

typedef struct{
    int alunos;
}Sala;

typedef struct cel* Apontador;
typedef struct cel
{
    Sala aluno;
    Apontador proximo;
}Celula;

typedef struct
{
    Apontador Primeiro;
    Apontador Ultimo;
}listaa;

void inicializalista(listaa* lista);
void Ehvazia(listaa* lista);
void InserirNalista(listaa* lista, Sala* valor);
void RemoverdaLista(listaa* lista, Sala* valor);
void imprimir(listaa* lista);



#endif